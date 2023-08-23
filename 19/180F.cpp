#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        ans[a[i]] = x;
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "\n" : " ");
    }
}

int main() {
    solve();
    return 0;
}