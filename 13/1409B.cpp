#include<iostream>

using namespace std;

typedef long long ll;

ll ab(ll a, ll b, ll x, ll y, ll n) {
	a -= n;
	n = 0;
	if (a < x) {
		n = x - a;
		a = x;
	}
	b -= n;
	n = 0;
	if (b < y) {
		n = b - y;
		b = y;
	}
	return a * b;
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		cout << min(ab(a, b, x, y, n), ab(b, a, y, x, n)) << endl;
	}

	return 0;
}