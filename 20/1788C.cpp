#include<iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int j = n / 2 + 1 + n;
    for (int i = 1; i <= n; i++) {
        cout << i << ' ' << j << '\n';
        j = j % n + 1 + n;
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