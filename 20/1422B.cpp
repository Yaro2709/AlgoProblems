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
		int n, m;
		cin >> n >> m;
		long long int** a = new long long  int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new long long  int[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		long long ans = 0;
		for (int i = 0; i < (n + 1) / 2; i++)
		{
			for (int j = 0; j < (m + 1) / 2; j++)
			{
				vector<long long> p;
				p.push_back(a[i][j]);
				if (i != n - i - 1)
					p.push_back(a[n - i - 1][j]);
				if (j != m - j - 1)
					p.push_back(a[i][m - j - 1]);
				if (i != n - i - 1 && j != m - j - 1)
					p.push_back(a[n - i - 1][m - j - 1]);
				sort(p.begin(), p.end());
				long long median = p[p.size() / 2];
				for (int k = 0; k < p.size(); k++)
				{
					ans += abs(p[k] - median);
				}
			}
		}
		cout << ans << endl;
		for (int long long i = 0; i < n; i++)
		{
			delete[] a[i];
		}
		delete[] a;
	}
	return 0;
}