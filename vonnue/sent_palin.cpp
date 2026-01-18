#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int i = 0, j = s.length() - 1;
    while(i<j){
        if(!isalnum(s[i]))
            i++;
        else if(!isalnum(s[j]))
            j--;
        else{
            if(tolower(s[i])!=tolower(s[j])){
                cout << "Not palindrome";
                return 0;
            }
            i++;
            j--;
        }    
    }
    cout << "palindrome";
    return 0;
}