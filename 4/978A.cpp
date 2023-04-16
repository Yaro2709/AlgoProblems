#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int r = n;

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j] && a[j] != 0)
			{
				a[j] = 0;
				r--;
			}
		}
	}

	cout << r << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0) {
			cout << a[i] << " ";
		}
	}

	return 0;
}