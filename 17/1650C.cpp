#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int tt; 
	cin >> tt;
	while (tt--)
	{
		int n, m; cin >> n >> m;
		vector<pair<int, pair<int, int>>> v;
		for (int i = 0, x, w; i < m; i++)
		{
			cin >> x >> w;
			v.push_back({ w, {x, i + 1} });
		}
		sort(v.begin(), v.end());

		vector<pair<int, int>> ans;
		int res = 0;
		for (int i = 0; i < 2 * n; i++) ans.push_back(v[i].second), res += v[i].first;
		sort(ans.begin(), ans.end());
		cout << res << '\n';
		for (int i = 0; i < n; i++)
		{
			cout << ans[i].second << ' ' << ans[2 * n - 1 - i].second << '\n';
		}
		cout << '\n';
	}

	return 0;
}