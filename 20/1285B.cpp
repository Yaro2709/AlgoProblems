#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		int j = 0;
		for (j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		long long int sum = 0;
		int f = 1;
		for (j = 0; j < n; j++)
		{
			sum = sum + a[j];
			if (sum <= 0)
			{
				f = 0;
			}
		}
		sum = 0;
		for (j = n - 1; j >= 0; j--)
		{
			sum = sum + a[j];
			if (sum <= 0)
			{
				f = 0;
			}
		}
		if (f)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

		delete[] a;
	}

	return 0;
}