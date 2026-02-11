//swapping numbers WITHOUT a temporary variable
#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout << "Read two numbers: ";
    cin >> a >> b;
    c = a ^ b;
    a = a ^ c;
    b = b ^ c;
    cout << "After swapping: "<<"a: "<<a<<" "<<"b: "<<b;
    return 0;
}