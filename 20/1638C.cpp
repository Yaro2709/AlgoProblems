#include<iostream>
#include<vector>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& x : v)cin >> x;
        int mx = -1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, v[i]);
            if (mx == i + 1) ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}