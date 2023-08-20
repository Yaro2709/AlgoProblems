#include<iostream>

using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		long long *arr = new long long[n];
		for (long long i = 0; i < n; i++) {
			cin >> arr[i];
		}
		long long sm = 0;
		long long p = 0;
		for (long long i = 0; i < n; i++)
		{
			sm += arr[i];
			if (arr[i] % k == 0)
				p++;
		}
		if (sm % k != 0)
			cout << n << endl;
		else if (p == n)
			cout << -1 << endl;
		else
		{
			long long x, y;
			for (long long i = 0; i < n; i++)
			{
				if (arr[i] % k != 0)
					x = i;
			}
			for (long long i = n - 1; i >= 0; i--)
			{
				if (arr[i] % k != 0)
					y = i;
			}
			y = n - y - 1;
			cout << max(x, y) << endl;
		}

		delete[] arr;
	}

	return 0;
}