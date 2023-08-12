#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, j, m = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > m)
		{
			j = i + 1;
			m = a[i];
		}
	}
	sort(a, a + n);
	cout << j << " " << a[n - 2];

	delete[] a;

	return 0;
}