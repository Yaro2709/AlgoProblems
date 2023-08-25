#include<iostream>
#include<string.h>

using namespace std;

int gcd(int a, int b)
{
	if (a < b) return gcd(b, a);
	while (b)
	{
		int t = b; b = a % b; a = t;
	}
	return a;
}

int p[32];

int main()
{
	int t, n, i;
	cin >> t;
	while (t--)
	{
		memset(p, 0, sizeof(p));
		cin >> n;
		for (i = 0; i < n; i++)
		{
			long long a, m = 0;
			cin >> a;
			while (a)
			{
				if (a % 2) p[m]++;
				m++;
				a /= 2;
			}
		}
		int m = 0;
		for (i = 0; i < 32; i++)
		{
			if (p[i] == 0) continue;
			if (m) m = gcd(m, p[i]);
			else m = p[i];
		}
		cout << 1;
		if (m)
		{
			for (i = 2; i <= m; i++) if (m % i == 0) cout << " " << i;
		}
		else for (i = 2; i <= n; i++) cout << " " << i;
		cout << endl;
	}

	return 0;
}