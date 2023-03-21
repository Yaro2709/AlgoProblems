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
			sum += a[i];
		}

		int count = 0;
		if (sum % n != 0) {
			cout << "-1" << endl;
		}
		else
		{
			int avg = sum / n;
			for (int i = 0; i < n; i++)
			{
				if (a[i] > avg) {
					count++;
				}
			}
			cout << count << endl;
		}

		delete[] a;
	}

	return 0;
}