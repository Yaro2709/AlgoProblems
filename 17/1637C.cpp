#include<iostream>

using namespace std;
typedef long long ll;

const int N = 1e5 + 100;
ll a[N], b[N];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		int f = 0;
		for (int i = 2; i < n; i++)
		{
			if (a[i] != 1)
				f = 1;
		}
		if ((n == 3 && a[2] % 2) || !f)
			cout << -1 << endl;
		else
		{
			ll ans = 0;
			for (int i = 2; i < n; i++)
			{
				if (a[i] % 2 == 0)	ans += a[i] / 2;
				else
				{
					ans += (a[i] + 1) / 2;
				}
			}
			cout << ans << endl;
		}
	}

	return 0;
}