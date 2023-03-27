#include<iostream>

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
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}

		cout << (sum - 1) / n + 1 << endl;

		delete[] a;
	}

	return 0;
}