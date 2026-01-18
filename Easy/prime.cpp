#include<iostream>
#include<cmath>
using namespace std;

int fib(int num){
    if(num==0 )
        return 0 ;
    else if(num==1)
        return 1;

    else
        return fib(num-1) + fib(num - 2);
}

int main(){
    int num,i,fact;
    cout << "Enter a number: ";
    cin >> num;
    fact=fib(num);
    cout << "Fib of " << num << " is " << fact;
    return 0;
}