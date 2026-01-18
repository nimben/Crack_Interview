#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
    int num,total=1,sum=0;
    cout << "Enter a number: ";
    cin >> num;
    int len = to_string(num).size();
    int n = num;
    while(n>0){
        int rem = n % 10;
        for (int i = 0;i<len;i++)
            total *= rem;
        sum += total;
        n = n / 10;
        total = 1;
    }
    if(sum==num)
        cout << num << " is an armstrong number";
    else
        cout << num << " is not an armstrong number";

    return 0;
}
