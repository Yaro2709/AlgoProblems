#include<iostream>

using namespace std;

int x, y, n, m, k, a[1000];

int main()
{
	cin >> n >> m >> k;
	for (; x < m; ++x)
		a[x] = 1e6;
	while (n--)
	{
		cin >> x >> y;
		a[x - 1] = min(a[x - 1], y);
	}
	while (m--)
		n += a[m];
	cout << min(n + 1, k);

	return 0;
}