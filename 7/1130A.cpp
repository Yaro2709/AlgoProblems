#include<iostream>

using namespace std;

int main() {
    int n, k1, k2;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        k1 += x > 0;
        k2 += x < 0;
    }

    if (k1 * 2 >= n)        cout << 1; 
    else if (k2 * 2 >= n)   cout << -1; 
    else                    cout << 0;

    return 0;
}