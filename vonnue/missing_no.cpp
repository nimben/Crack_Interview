#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], i,total_sum=0,sum=0;
    cout << "Array: ";
    for (i = 0; i < n;i++){
        cin >> a[i];
    }

    for (i = 1; i <= n+1;i++){
        total_sum += i;
    }

    for (i = 0; i < n;i++){
        sum += a[i];
    }

    cout << "Missing number : " << total_sum - sum;

    return 0;
}