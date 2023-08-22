#include<iostream>

using namespace std;

int a[1000][1000];
int ans[3000][10];

int main()
{
	int m, n, k;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n + 1; i++)
		for (int j = 1; j <= m + 1; j++)
		{
			if (abs(a[i][j]))
				if (abs(a[i - 1][j]) && abs(a[i][j - 1]) && abs(a[i - 1][j - 1]))
				{
					k++;
					ans[k][1] = i - 1;
					ans[k][2] = j - 1;
					a[i][j] = -1;
					a[i - 1][j] = -1;
					a[i][j - 1] = -1;
					a[i - 1][j - 1] = -1;
				}
		}
	bool flag = true;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (a[i][j] == 1)
				flag = false;
	if (flag)
	{
		cout << k << endl;
		for (int i = 1; i <= k; i++)
			cout << ans[i][1] << " " << ans[i][2] << endl;
	}
	else
		cout << "-1" << endl;

	return 0;
}