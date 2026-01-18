#include<iostream>
using namespace std;
int main(){
    int SI, P, R, T,total_amt;
    cout<<"Enter the principal amount: ";
    cin>>P;
    cout<<"Enter the rate of interest: ";
    cin>>R;
    cout<<"Enter the time period: ";
    cin>>T;
    SI =( P * R * T)/100;
    cout << "Simple Interest: " << SI <<endl;
    total_amt = SI + P;
    cout << "Total amount after " << T << " years = " << total_amt;
    return 0;
}