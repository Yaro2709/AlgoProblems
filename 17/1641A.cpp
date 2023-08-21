#include<iostream>
#include<map>

using namespace std;

#define ll long long int
map<ll, ll> q;

int main()
{
	ll t, n, x;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		for (int i = 0; i < n; i++)
		{
			ll y;
			cin >> y;
			q[y]++;
		}
		ll ans = 0;
		for (auto [k, v] : q)
		{
			if (q[k] != 0)
			{
				if (q[k * x] >= q[k])
				{
					q[k * x] -= q[k];
					q[k] = 0;
				}
				else
				{
					ans += q[k] - q[k * x];
					q[k * x] = 0;
				}
			}
		}
		cout << ans << endl;
		q.clear();
	}
	return 0;
}