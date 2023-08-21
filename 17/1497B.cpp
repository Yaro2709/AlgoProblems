#include<iostream>
#include<string.h>

using namespace std;

#define ll long long int

const ll N = 1e5 + 10;

ll n, m;
ll cnt[N];

void solve()
{
	cin >> n >> m;
	memset(cnt, 0, sizeof(cnt[0]) * (m + 5));
	ll ans = 0;
	for (ll i = 1; i <= n; i++)
	{
		ll t;
		cin >> t;
		cnt[t % m]++;
	}
	if (cnt[0]) ans++;
	cnt[0] = 0;
	for (ll i = 1; i <= m - i; i++)
	{
		if (cnt[i] == 0 && cnt[m - i] == 0) continue;
		ans += max(1LL, abs(cnt[i] - cnt[m - i]));
	}
	cout << ans << endl;
}

int main()
{
	ll t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}