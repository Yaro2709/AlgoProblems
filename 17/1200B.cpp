#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

int main() {
    ll t; 
    cin >> t;
    for (ll ti = 0; ti < t; ti++) {
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll ok = true;
        for (ll i = 0; i < n - 1; i++) {
            m += a[i] - max(0ll, a[i + 1] - k);

            if (m < 0) {
                ok = false;
                break;
            }
        }

        if (m < 0) ok = false;

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}