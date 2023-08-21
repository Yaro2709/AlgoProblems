#include<iostream>

using namespace std;

#define ll long long int

void solve()
{
	ll n, k; cin >> n >> k;
	ll ans;
	if (n & 1)
	{
		ll m = k - 1;
		ll T = (n - 1) / 2;
		ans = (m / T + m) % n + 1;
	}
	else
	{
		ans = 1 + (k - 1) % n;
	}
	cout << ans << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}