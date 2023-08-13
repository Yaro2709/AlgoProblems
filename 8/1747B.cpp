#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << ceil(n / 2.0) << endl;
    for (int i = 0; i < ceil(n / 2.0); i++) {
        cout << 3 * i + 2 << ' ' << 3 * (n - i - 1) + 3 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}