#include <iostream>
#include <algorithm>

using namespace std;

int a[200002];
long long int sum[200002];

int main()
{
	int n, q;
	int  x, y;
	cin >> n >> q;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++)
		sum[i] += sum[i - 1] + a[i];

	while (q--)
	{
		cin >> x >> y;
		cout << sum[n - x + y] - sum[n - x] << endl;
	}

	return 0;
}