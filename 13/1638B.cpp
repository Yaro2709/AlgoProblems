#include<iostream>

using namespace std;

void solve() {
    int n, x;
    cin >> n;
    int preO = 1;
    int preT = 0;
    bool test = 1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x & 1) {
            if (preO > x)
                test = false;
            preO = x;
        }
        else {
            if (preT > x)
                test = false;
            preT = x;
        }
    }
    cout << (test ? "YES" : "NO") << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}