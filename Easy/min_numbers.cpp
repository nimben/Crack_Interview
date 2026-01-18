#include<iostream>
using namespace std;
 int main(){
     int n1,ch;
     while(true){
     cout << "\nEnter a choice: ";
     cin >> ch;
     switch(ch){
     case 1:
     cout << "Enter a number: ";
     cin >> n1;
     
     if(n1<0)
         cout << "invalid";
     else{
     if(n1%2==0)
         cout << n1 << " is even";
     else
         cout << n1 << " is odd";
     }
     break;
     case 0:
         cout << "Exit";
         return 0;

     }
     }
     return 0;
 }