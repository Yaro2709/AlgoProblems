#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int I = 0; I < t; I++)
	{
		int n;
		cin >> n;
		int* p = new int[n];
		int* c = new int[n];
		int u = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> p[i] >> c[i];
			if (c[i] > p[i])
			{
				u = 1;
			}
			if (i > 0)
			{
				if (c[i] < c[i - 1] || p[i] < p[i - 1])
				{
					u = 1;
				}
				if (c[i] - c[i - 1] > p[i] - p[i - 1])
				{
					u = 1;
				}
			}
		}
		if (u == 0)
		{
			cout << "YES" << "\n";
		}
		else if (u == 1)
		{
			cout << "NO" << "\n";
		}

		delete[] p;
		delete[] c;
	}
	return 0;
}