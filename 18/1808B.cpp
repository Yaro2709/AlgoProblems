#include<iostream>
#include<algorithm>

using namespace std;

#define lli long long int

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		lli** a = new lli * [m+1];
		for (int i = 0; i < m+1; i++)
		{
			a[i] = new lli[n+1];
		}
		for (int j = 1; j <= n; j++) for (int i = 1; i <= m; i++) cin >> a[i][j];
		for (int i = 1; i <= m; i++) sort(a[i] + 1, a[i] + n + 1);
		lli** dp = new lli * [m + 1];
		for (int i = 0; i < m + 1; i++)
		{
			dp[i] = new lli[n + 1];
		}
		lli kq = 0;
		for (int i = 1; i <= m; i++)
		{
			dp[i][0] = 0;
			for (int j = 1; j <= n; j++) dp[i][j] = dp[i][j - 1] + a[i][j];
		}
		for (int i = 1; i <= m; i++)
			for (int j = 2; j <= n; j++) kq += a[i][j] * (j - 1) - dp[i][j - 1];
		cout << kq << "\n";

		for (int i = 0; i < m+1; i++)
		{
			delete[] a[i]; 
		}
		delete[] a; 
		for (int i = 0; i < m+1; i++)
		{
			delete[] dp[i]; 
		}
		delete[] dp;
	}

	return 0;
}