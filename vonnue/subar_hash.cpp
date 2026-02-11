#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> Sums;
    int n;
    cout << "Size: ";
    cin >> n;
    vector<int> a(n); 
    int k, sub_count = 0,curr_sum=0;
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "k: ";
    cin >> k;

    for (int i = 0; i < n;i++){
        curr_sum += a[i];
        if(curr_sum==k){
            sub_count++;
        }

        if(Sums.find(curr_sum-k)!=Sums.end()){
            sub_count += Sums[curr_sum - k];
        }

        Sums[curr_sum]++;
    }

    cout << "Total no of subarrays having sum k: " << sub_count;

    return 0;
}