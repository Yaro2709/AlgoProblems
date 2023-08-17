#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		int evens, odds;
		evens = odds = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> a[j];
			if (a[j] % 2 == 0)
				evens++;
			else
				odds++;
		}

		if (evens % 2 == 0 && odds % 2 == 0) {
			cout << "YES" << endl;
		}
		else if (evens % 2 == 1 && odds % 2 == 1)
		{
			sort(a, a + n);

			bool flag = false;
			for (int j = 1; j < n; j++)
			{
				if (a[j] - a[j - 1] == 1)
				{
					flag = true;
					break;
				}
			}

			if (!flag)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}

		delete[] a;
	}
	return 0;
}