#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    int n = prices.size();
    int lmin = prices[0], lmax = prices[0], res = 0,i=0;
    while(i<n-1){
        while(i<n-1 && prices[i]>=prices[i+1]){
            i++;
        }
        lmin = prices[i];
        while(i<n-1 && prices[i]<=prices[i+1]){
            i++;
        }
        lmax = prices[i];

        res = res + (lmax - lmin);
    }
    cout << res;
    return 0;
}