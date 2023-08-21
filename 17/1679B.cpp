#include<iostream>
#include<map>

using namespace std;

#define ll long long

int main() {
	ll n, q;
	cin >> n >> q;
	ll sum = 0;
	map<ll, ll> m;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		m[i + 1] = x;
		sum += x;
	}
	ll ele = 0;

	while (q--) {
		int t;
		cin >> t;
		if (t == 1) {
			ll ind, x;
			cin >> ind >> x;
			auto it = m.find(ind);
			if (it != m.end()) {
				sum = sum - it->second + x;
				m.erase(it);
				m[ind] = x;
			}
			else {
				m[ind] = x;
				sum = sum - ele + x;;
			}
		}
		else {
			ll x;
			cin >> x;
			sum = n * x;
			ele = x;
			m.clear();
		}
		cout << sum << endl;
	}

	return 0;
}