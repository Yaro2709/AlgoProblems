#include<iostream>

using namespace std;

int dp[200005][2];
int a[200005];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int ans = 0;
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1, x; i <= n; i++)
		{
			dp[i][0] = 1;
			dp[i][1] = 1;
			x = a[i];
			for (int j = 0; j <= 1; j++, x++)
			{
				for (int k = i - 1; k >= 1; k--)
				{
					(a[k] == x - 1) && (dp[i][j] = max(dp[i][j], dp[k][0] + 1));
					(a[k] == x - 2) && (dp[i][j] = max(dp[i][j], dp[k][1] + 1));
				}
				ans = max(ans, dp[i][j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}