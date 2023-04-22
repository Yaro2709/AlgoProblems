#include <iostream>

using namespace std;

int a[110];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
		}

		if (sum == m)
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}