#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count=0;
    cout << "String: ";
    cin >> s;
    for (int i = 0; i < s.length();i++){
        for (int j = i; j < s.length();j++){
            if(s[i]==s[j]){
               count=count+1;
           }     
       }
    }
    cout << count;
    return 0;
}