#include<iostream>

using namespace std;

int p[105];

void solve() {
    int n, k;
    cin >> n >> k;
    long long pre, ans;
    ans = pre = 0;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pre += p[i - 1];
        if (i != 1)ans = max(ans, (p[i] * 100ll + k - 1) / k - pre);
    }
    cout << ans << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--)solve();

    return 0;
}