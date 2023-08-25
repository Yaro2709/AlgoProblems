#include<iostream>

using namespace std;

#define ll long long int

ll chk(ll mid, ll k) {
    ll sum;
    if (mid <= k) {
        sum = (mid * (mid + 1)) / 2;
        return sum;
    }

    sum = (k * (k + 1)) / 2;
    ll extra = mid - k;
    ll sum2 = (extra * (extra + 1)) / 2;
    sum += (extra * k - sum2);
    return sum;
}

void solve() {
    ll k, x; cin >> k >> x;
    ll lo = 1, hi = 2 * k - 1;
    while (lo < hi) {
        ll mid = lo + (hi - lo) / 2;
        if (chk(mid, k) >= x) hi = mid;
        else lo = mid + 1;
    }
    cout << lo << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();

    return 0;
}