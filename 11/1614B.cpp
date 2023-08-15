#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<pair<ll, ll>> aa(n);
		for (int i = 0; i < n; i++)
		{
			aa[i].first = i;
			cin >> aa[i].second;
		}
		sort(aa.begin(), aa.end(), [](const pair<ll, ll>& lhs, const pair<ll, ll>& rhs)
			{
				return lhs.second > rhs.second;
			});
		vector<ll> ot(n);
		ll cost = 0;
		for (ll i = 0; i < n; i++)
		{
			cost += 2 * (i / 2 + 1) * aa[i].second;
			ot[aa[i].first] = (i / 2 + 1) * (i % 2 == 0 ? -1 : 1);
		}
		cout << cost << '\n';
		cout << 0;
		for (ll i = 0; i < n; i++)
			cout << ' ' << ot[i];
		cout << '\n';
	}

	return 0;
}