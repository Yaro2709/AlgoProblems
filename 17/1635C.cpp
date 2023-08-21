#include<iostream>

using namespace std;

int long long a[200010];
int x[200010], y[200010], z[200010];

int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; ++i)cin >> a[i];
        int ans = 0;
        for (int i = n - 2; i >= 1; --i) {
            if (a[i] <= a[i + 1])continue;
            ++ans;
            x[ans] = i, y[ans] = i + 1, z[ans] = n;
            a[i] = a[i + 1] - a[n];
        }
        for (int i = 1; i < n; ++i)
            if (a[i] > a[i + 1])ans = -1;
        cout << ans << '\n';
        for (int i = 1; i <= ans; ++i)
            cout << x[i] << " " << y[i] << " " << z[i] << '\n';
    }
    return 0;
}