#include<iostream>
#include<vector>

using namespace std;

void solvetask() {
    int n, m; cin >> m >> n;
    vector<int> l(n), r(n), t(n), c(n + 1);
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i] >> t[i] >> c[i];

    vector<int> best(m + 1, n);
    for (int i = 0; i < n; i++) {
        for (int j = l[i]; j <= r[i]; j++) {
            if (best[j] == n || t[best[j]] > t[i]) best[j] = i;
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++) ans += c[best[i]];
    cout << ans << endl;
}

int main() {
    int t = 1;
    while (t--) solvetask();

    return 0;
}