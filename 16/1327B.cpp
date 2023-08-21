#include<iostream>

using namespace std;

using ll = long long;

int main() {
	ll t;
	cin >> t;
	for (ll x = 0; x < t; x++) {
		ll n;
		bool p[100001], opt = true;
		pair<ll, ll> ans;

		cin >> n;

		for (ll i = 1; i <= n; i++) {
			p[i] = 0;
		}

		for (ll i = 1; i <= n; i++) {
			ll k;
			cin >> k;
			bool ok = false;
			for (ll j = 1; j <= k; j++) {
				ll gi;
				cin >> gi;

				if (!p[gi] && !ok) {
					p[gi] = true;
					ok = true;
				}
			}
			if (!ok && opt) {
				opt = false;
				ans.first = i;
			}
		}
		if (!opt) {
			ll i;
			for (i = 1; p[i]; i++);
			ans.second = i;
			cout << "IMPROVE\n" << ans.first << " " << ans.second << "\n";
		}
		else
			cout << "OPTIMAL\n";
	}

	return 0;
}