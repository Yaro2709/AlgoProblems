#include <iostream>
#include <algorithm>

using namespace std;

int  main()
{
	int a[1005];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	int m = (n - 1) / 2;
	cout << a[m];

	return 0;
}