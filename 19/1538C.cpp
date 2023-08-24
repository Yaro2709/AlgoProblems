#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

const int maxn = 2e5 + 5;
int a[maxn];

void solve() {
    int n, l, r; cin >> n >> l >> r;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n); ll rj = 0;
    for (int i = 0; i < n; i++) {
        rj += upper_bound(a, a + n, r - a[i]) - a;
        rj -= lower_bound(a, a + n, l - a[i]) - a;
        if (l <= 2 * a[i] and 2 * a[i] <= r) rj--;
    }
    cout << rj / 2 << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();

    return 0;
}