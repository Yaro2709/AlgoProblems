#include<iostream>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		int n, k; 
		cin >> n >> k;
		int** a = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		int p = 0;
		for (int i = 0; i < n / 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] != a[n - 1 - i][n - 1 - j]) { p++; }
			}
		}
		if (n % 2 != 0)
		{
			for (int j = 0; j < n / 2; j++)
			{
				if (a[n / 2][j] != a[n / 2][n - 1 - j]) { p++; }
			}
		}
		int  d = abs(p - k);
		if (n % 2 != 0)
		{
			if (p > k) { cout << "NO" << endl; }
			else { cout << "YES" << endl; }
		}
		else
		{
			if (d % 2 != 0) { cout << "NO" << endl; }
			else
			{
				if (p > k) { cout << "NO" << endl; }
				else { cout << "YES" << endl; }
			}
		}

		for (int i = 0; i < n; i++)
		{
			delete[] a[i]; 
		}
		delete[] a;

	}
	return 0;
}