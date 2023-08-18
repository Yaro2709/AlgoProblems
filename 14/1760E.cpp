#include<iostream>

using namespace std;

long long int a[200009], b[200009], c[200009];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, sum = 0;
		cin >> n;
		c[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if (a[i] == 1)c[i] = c[i - 1] + 1;
			else c[i] = c[i - 1];
		}
		b[n + 1] = 0;
		for (int i = n; i >= 1; i--)
		{
			if (a[i] == 0)b[i] = b[i + 1] + 1;
			else b[i] = b[i + 1];
		}
		for (int i = 1; i <= n; i++)
			if (a[i] == 1)sum += b[i];

		long long cnt = sum;
		for (int i = 1; i <= n; i++)
		{

			if (a[i] == 1)
			{
				sum = max(sum, cnt - b[i] + c[i] - 1);
			}
			else
			{
				sum = max(sum, cnt - c[i] + b[i] - 1);
			}
		}
		cout << sum << endl;
	}

	return 0;
}