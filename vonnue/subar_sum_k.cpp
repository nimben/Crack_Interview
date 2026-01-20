#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Size: ";
    cin >> n;
    int a[n],sum=0,k,sub_count=0;
    cout << "Array: ";
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cout << "k: ";
    cin >> k;

    for (int i = 0; i < n;i++){
        sum = 0;
        for (int j = i; j < n;j++){
            sum += a[j];
            if(sum==k){
                sub_count++;
                break;
            }
    }

    }
    cout << "Total no of subarrays having sum k: " << sub_count;
    return 0;

}