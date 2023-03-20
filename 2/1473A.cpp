#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, d;
		cin >> n >> d;
		int flag = 1;

		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (a[i] > d)
			{
				flag = 0;
			}
		}

		sort(a, a + n);

		if (a[0] + a[1] <= d)
		{
			flag = 1;
		}

		if (flag == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}