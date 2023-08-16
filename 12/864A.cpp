#include <iostream>

using namespace std;

int a[111000];
int m, n, u;

int main()
{
	cin >> m;
	for (int x = 0; x < m; x++)
	{
		cin >> n;
		a[n]++;
		if (a[n] == 1)
		{
			u++;
		}
	}

	if (u == 2 && m % 2 == 0 && a[n] == m / 2)
	{
		cout << "YES" << endl;
		for (int x = 0; x < 110; x++)
		{
			if (a[x])
			{
				cout << x << " ";
			}
		}
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}