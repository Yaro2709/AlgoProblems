#include<iostream>

using namespace std;

long prime[100555];

void sieve()
{
	long c, d;

	for (c = 2; c * c <= 100055; c += 1)
	{
		if (prime[c] == 0)
		{
			for (d = c * c; d <= 100055; d += c)
			{
				prime[d] = 1;
			}
		}
	}
	prime[1] = prime[0] = 1;
}


long neareast_prime(long n)
{
	for (long i = n;; i++)
	{
		if (prime[i] == 0) return i;
	}
}

int main()
{
	int i, j, k, n, m;
	long a[555][555];
	sieve();
	cin >> n >> m;
	for (i = 1; i <= n; i += 1)
	{
		for (j = 1; j <= m; j += 1)
		{
			cin >> a[i][j];
			a[i][j] = neareast_prime(a[i][j]) - a[i][j];
		}
	}
	long sum1, ans = 1000666669;
	sum1 = 0;
	for (i = 1; i <= n; i += 1)
	{
		sum1 = 0;
		for (j = 1; j <= m; j++)
		{
			sum1 = sum1 + a[i][j];
		}
		ans = min(sum1, ans);
	}
	sum1 = 0;
	for (i = 1; i <= m; i += 1)
	{
		sum1 = 0;
		for (j = 1; j <= n; j += 1)
		{
			sum1 = sum1 + a[j][i];
		}
		ans = min(ans, sum1);

	}
	cout << ans;

	return 0;
}