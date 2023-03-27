#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;

		long long int* a = new long long int[k];
		for (int i = 0; i < k; i++)
		{
			cin >> a[i];
		}

		if (a[0] + a[1] > a[k - 1])
		{
			cout << -1 << endl;
		}
		else
		{
			cout << 1 << " " << 2 << " " << k << endl;
		}

		delete[] a;
	}

	return 0;
}