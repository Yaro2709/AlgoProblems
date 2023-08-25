#include<iostream>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int* a = new long long int[n];
        long long int ans = 0;
        for (int i = 0; i < n; i++)cin >> a[i];
        long long int* dp = new long long int[n + 2];
        dp[1] = 0;
        for (long long int i = 0; i < n; i++) {
            dp[i + 2] = min(dp[i + 1] + 1, a[i]);
            ans += dp[i + 2];
        }
        cout << ans << "\n";

        delete[] a;
        delete[] dp;
    }
    return 0;
}