#include<iostream>
#include<vector>

using namespace std;

int mat[111][111];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		mat[a][b] = 1;
		mat[b][a] = 1;
	}
	int ans = 0;
	for (;;)
	{

		int ok = 0;
		vector<int> v;
		v.clear();
		for (int i = 1; i <= n; i++)
		{
			int tt = 0;
			for (int j = 1; j <= n; j++)
			{

				if (mat[i][j] == 1)
				{
					tt++;
				}
			}
			if (tt == 1)
			{
				v.push_back(i);
				ok = 1;
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (mat[v[i]][j] == 1)
				{
					mat[v[i]][j] = 0;
					mat[j][v[i]] = 0;
					break;
				}
			}
		}

		if (ok == 0) break;
		ans++;
	}
	cout << ans << endl;

	return 0;
}