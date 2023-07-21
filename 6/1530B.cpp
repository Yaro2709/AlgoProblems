#include <iostream>

using namespace std;

const int N = 110;

int a[N][N];

bool check(int i, int j)
{
	if (!a[i - 1][j] && !a[i][j - 1] && !a[i + 1][j + 1] && !a[i + 1][j] && !a[i][j + 1] && !a[i - 1][j - 1] && !a[i - 1][j + 1] && !a[i + 1][j - 1])
		return true;
	return false;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		for (int i = 1; i <= m; i++)
			if (check(1, i))
				a[1][i] = 1;

		for (int i = 1; i <= n; i++)
			if (check(i, m))
				a[i][m] = 1;

		for (int i = m; i >= 1; i--)
			if (check(n, i))
				a[n][i] = 1;


		for (int i = n; i >= 1; i--)
			if (check(i, 1))
				a[i][1] = 1;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
				cout << a[i][j];
			puts("");
		}

		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				a[i][j] = 0;

	}
	return 0;
}