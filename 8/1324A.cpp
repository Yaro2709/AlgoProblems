#include <iostream>

using namespace std;

int a[105];

int main()
{
	int t, n, i, x, p;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 1; i < n; i++)
			if ((a[i - 1] & 1) != (a[i] & 1))
				break;
		if (i == n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}