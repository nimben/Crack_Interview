#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>arr = {0, -1, 2, -3, 1};
    int target = -2;
    for (int i = 0; i < arr.size();i++){
        for (int j = i + 1; j < arr.size();j++){
            if(arr[i]+arr[j]==target){
                cout << arr[i] << ", "<< arr[j];
                break;
            }
            
        }
    }
    return false;
    return 0;
}