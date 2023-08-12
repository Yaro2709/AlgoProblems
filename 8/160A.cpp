#include <iostream>
#include <algorithm>

using namespace std;

int a[105], i, k, m;

int main()
{
	int n;
	cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i], m = m + a[i];
	sort(a + 1, a + n + 1);
	for (i = n; i >= 1; i--)
	{
		k = k + a[i];
		if (k * 2 > m) break;
	}
	cout << n - i + 1;

	return 0;
}