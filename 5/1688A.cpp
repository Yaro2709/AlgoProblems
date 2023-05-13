#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1)
        cout << 3 << endl;
    else if (n % 2)
        cout << 1 << endl;
    else {
        int k = n & (-n);
        if (k == n)
            k++;
        cout << k << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}