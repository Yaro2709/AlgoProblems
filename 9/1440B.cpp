#include<iostream>

using namespace std;

#define ll long long int

int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll* a = new ll[n * k];
		for (ll i = 0; i < n * k; i++) {
			cin >> a[i];
		}
		ll ans = 0;
		for (ll i = k; i >= 1; i--) {
			ans += a[n * k - i * ((n + 2) / 2)];
		}
		cout << ans << endl;

		delete[] a;
	}

	return 0;
}