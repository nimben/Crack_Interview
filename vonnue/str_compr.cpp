#include<iostream>
using namespace std;
int main(){
    int count=1;
    string s;
    cout << "Enter string: ";
    cin >> s;
    for (int i = 0; i < s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            cout << s[i] << count;
            count = 1;
        }
    }
        return 0;
}