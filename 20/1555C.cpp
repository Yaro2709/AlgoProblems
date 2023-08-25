#include<iostream>
#include<vector>

using namespace std;

#define ll long long int

int main()
{
	ll t = 1;
	cin >> t;
	while (t--)
	{
		ll m;
		cin >> m;
		vector<vector<ll>> vec(2, vector<ll>(m, 0));
		for (ll i = 0; i < 2; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				cin >> vec[i][j];
			}
		}
		ll sum1 = 0, sum2 = 0, ans = INT_MAX;
		for (ll i = 0; i < m; i++)
			sum1 += vec[0][i];
		for (ll i = 0; i < m; i++)
		{
			sum1 -= vec[0][i];
			ans = min(ans, max(sum1, sum2));
			sum2 += vec[1][i];
		}
		cout << ans << endl;
	}
	return 0;
}