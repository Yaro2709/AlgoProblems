#include<iostream>

using namespace std;

string str[100];

void solve()
{
	int i, j, k, n, m;
	cin >> n >> m;
	for (i = 0; i < n; i++)cin >> str[i];
	for (i = 0; i < m; i++)
	{
		for (k = n - 1; k > 0; k--)
		{
			for (j = n - 1; j > 0; j--)
			{
				if (str[j][i] == '.' && str[j - 1][i] == '*')
				{
					str[j][i] = '*';
					str[j - 1][i] = '.';
				}
			}
		}

	}
	for (i = 0; i < n; i++)cout << str[i] << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}