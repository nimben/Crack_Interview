//Print a single integer representing the maximum number of coins placed in any one box.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int get_digit_sum(int j){
    int sum = 0;
    while(j!=0){
        int rem = j%10;
        sum=sum+rem;
        j=j/10;
    }
    return sum;
}

int main() {
    
    int n,mini,maxi,box_id;
    cout<<"Total values: ";
    cin >> n;
    vector<int> a(n);
    cout<<"Values: ";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    mini=*min_element(a.begin(),a.end());
    maxi=*max_element(a.begin(),a.end());
    
    unordered_map<int,int>boxes;
    for(int i=mini;i<=maxi;i++){
        box_id=get_digit_sum(i);
        boxes[box_id]++;
    }

int max_coins=0;
for(auto &p : boxes){
    max_coins = max(max_coins, p.second);
}
cout << max_coins << endl;
return 0;
}