#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void h() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0, l = n - 1 - k, r = n - 1;
    while (l >= 0 && k) {
        ans += (a[l] / a[r]);
        r--, l--, k--;
    }
    for (int i = 0; i <= l; i++) ans += a[i];
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        h();
    }

    return 0;
}