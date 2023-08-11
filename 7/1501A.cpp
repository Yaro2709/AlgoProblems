#include<iostream>

using namespace std;

int a[101010];
int b[101010];
int t[101010];
int k[101010];

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		int ans = 0;
		cin >> n;
		for (int i = 1; i <= n; ++i)
		{
			cin >> a[i] >> b[i];
			k[i] = a[i] - b[i - 1];
		}
		for (int i = 1; i <= n; ++i)
		{
			cin >> t[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			ans += k[i] + t[i];
			if (i != n)
				ans = max(b[i], ans + (b[i] - a[i] + 1) / 2);
		}
		cout << ans << endl;
	}
	return 0;
}