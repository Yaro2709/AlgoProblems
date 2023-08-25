#include<iostream>
#include<set>

using namespace std;

#define ll long long int

const int N = 3e5 + 10;
ll f[N];

void solve()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		ll c, d;
		cin >> n >> c >> d;
		set<ll> a;
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			a.insert(x);
		}
		int cnt = 0;
		ll ans = (ll)(n - a.size()) * c;
		for (auto x : a) f[++cnt] = x;
		ll res = 2e18;
		for (int i = 1; i <= cnt; i++)
		{
			res = min(res, (ll)(f[i] - i) * d + (ll)(cnt - i) * c);
		}
		res = min(res, (ll)cnt * c + d);
		cout << ans + res << '\n';
	}
}

int main()
{
	solve();
	return 0;
}