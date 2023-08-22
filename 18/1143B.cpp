#include<iostream>

using namespace std;

int n;
int a[19], na;
int dp[19][3];

int main() {
    cin >> n;
    int t = n;
    while (t)a[na++] = t % 10, t /= 10; na--;
    int ans = 1, tt = 1;
    dp[na + 1][0] = 1;
    for (int i = na; i >= 0; i--) {
        dp[i][0] = dp[i + 1][0] * a[i];
        dp[i][1] = max(dp[i + 1][0] * max(a[i] - 1, 1), dp[i + 1][1] * 9);
    }
    cout << max(dp[0][0], dp[0][1]) << endl;
    return 0;
}