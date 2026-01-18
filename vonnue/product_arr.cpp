#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {10, 3, 5, 6, 2};
    int n = arr.size(),i=0;
    vector<int> res(n, 1);
        for (int j = 0; j < n;j++){
            for (int i = 0; i < n;i++){
                if(i!=j)
                 res[j] = res[j] * arr[i];
                else continue;
            }                
        }
        for (int i = 0; i < n;i++)
            cout << res[i] <<" " ;
        return 0;
}