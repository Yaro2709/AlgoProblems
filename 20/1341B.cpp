#include<iostream>

using namespace std;

const int maxn = 2e5 + 5;
int a[maxn];
int b[maxn];
int f[maxn];

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		b[1] = 0;
		b[n] = 0;
		for (int i = 2; i < n; i++)
			if (a[i - 1] < a[i] && a[i + 1] < a[i])b[i] = 1;
			else b[i] = 0;
		f[0] = 0;
		for (int i = 1; i <= k - 2; i++)
			f[i] = f[i - 1] + b[i];
		for (int i = k - 1; i <= n; i++)
			f[i] = f[i - 1] + b[i] - b[i - k + 2];
		int ans = k;
		for (int i = k; i <= n; i++)
			if (f[ans - 1] < f[i - 1])ans = i;
		cout << f[ans - 1] + 1 << " " << ans - k + 1 << endl;
	}

	return 0;
}