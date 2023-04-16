#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 2) {
				sum++;
			}
		}

		if (sum % 2 == 1)
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			int cnt = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] == 2)
				{
					cnt++;
				}
				if (cnt == sum / 2)
				{
					cout << i << endl;
					break;
				}
			}
		}

		delete[] a;
	}

	return 0;
}