#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }

    for (int i = 0; i < n; i++) {
        if (sum - v[i] == (n - 1) * v[i])
        {
            cout << "YES" << endl;
            return;
        }

    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}