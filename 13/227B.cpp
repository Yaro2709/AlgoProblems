#include<iostream>

using namespace std;

#define ll long long int

int main()
{
	ll n, m;
	cin >> n;
	ll *a = new ll[n + 1];
	for (ll i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		a[x] = i;
	}
	cin >> m;
	ll ans1 = 0, ans2 = 0;
	while (m--) {
		ll x;
		cin >> x;
		ans1 += a[x];
		ans2 += n - a[x] + 1;
	}
	cout << ans1 << " " << ans2;

	delete[] a;

	return 0;
}