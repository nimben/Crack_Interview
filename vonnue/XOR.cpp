#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;
    int a[n], p[n];
    cout << "pref_Array: ";
    for (int i = 0; i < n; i++)
        cin >> p[i];

    a[0] = p[0];

    for (int i = 1; i < n; i++)
        a[i] = p[i] ^ p[i - 1];

    cout << "Original_Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}