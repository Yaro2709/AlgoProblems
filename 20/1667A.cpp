#include<iostream>
#include<vector>

using namespace std;

using ll = long long;

int main() {
	ll n;
	cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll best = 1e18;
	for (ll i = 0; i < n; ++i) {
		ll n_moves = 0;
		ll last_abs = 0;
		for (int j = i - 1; j >= 0; --j) {
			ll times = (last_abs + a[j]) / a[j];
			last_abs = a[j] * times;
			n_moves += times;
		}
		last_abs = 0;
		for (int j = i + 1; j < n; ++j) {
			ll times = (last_abs + a[j]) / a[j];
			last_abs = a[j] * times;
			n_moves += times;
		}
		best = min(best, n_moves);
	}
	cout << best << '\n';

	return 0;
}