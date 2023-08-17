#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n, i, a = 0;
    cin >> n;
    vector<int> arr(n + 1), ans(n + 1, 0);
    for (i = 1; i <= n; i++) cin >> arr[i];
    for (i = 1; i <= n; i++) ans[i] = arr[i];
    for (i = n; i >= 1; i--) {
        if (i + arr[i] <= n) ans[i] += ans[i + arr[i]];
    }
    for (i = 1; i <= n; i++) a = max(a, ans[i]);
    cout << a << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}