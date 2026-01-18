#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[10],n,sub,mini=INT_MAX;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1;i++){
        for (int j = i+1; j < n; j++){
            sub = abs(arr[i] - arr[j]);
            mini = min(mini, sub);
        }
    }
    cout << "Minimum abs diff btw any two distinct numbers: " << mini;

    return 0;
}