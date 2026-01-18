#include<iostream>
#include<cmath>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int a[n], i,j,res=INT_MAX,k;
    cout << "Array: ";
    for (i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << "k: ";
    cin >> k;

    for (i = 0; i < n;i++){
        int curr = 0;
        for (j = i; j < n;j++){
            curr += a[j];
            if(curr>=k){
                res = min(res, j - i + 1);
                break;
            }
        }
    }
if(res==INT_MAX){
    cout << "No such subarray";
}
else{
    cout << "Min length of subarray to count upto k: " << res;
}

    return 0;
}