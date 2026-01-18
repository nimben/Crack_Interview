#include<bits/stdc++.h>
using namespace std;
int main(){
    int age,z=1;
    
    while(z){
    cout << "Enter age: ";
    cin >> age;

    if(age<18)
        cout << "Not eligible for job\n";

    else if(age <=57){
        cout << "Eligible for job";
        if(age >=55 )
            cout << " ,but retirement sooooon\n";
    }

    else 
        cout << "Retirement timee\n";

    cout << "Do you want to continue(1-yes,0-no): ";
    cin >> z;
    }
}