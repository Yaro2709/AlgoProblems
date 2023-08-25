#include<iostream>

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        int ans = 0;
        for (int i = 0; i < n; i++)cin >> a[i];
        int *dp = new int[n + 2];
        dp[1] = 0;
        for (int i = 0; i < n; i++) {
            dp[i + 2] = min(dp[i + 1] + 1, a[i]);
            ans += dp[i + 2];
        }
        cout << ans << "\n";

        delete[] a;
        delete[] dp;
    }
    return 0;
}