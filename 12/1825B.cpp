#include <iostream>
#include <algorithm>

using namespace std;

long long int a[100005];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n * m; i++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n * m + 1);
		long long ans = 0;
		ans = max(ans, (m - 1) * (a[n * m] - a[1]) + (n - 1) * (a[n * m] - a[2]));
		ans = max(ans, (m - 1) * (a[n * m] - a[2]) + (n - 1) * (a[n * m] - a[1]));
		ans = max(ans, (m - 1) * (a[n * m] - a[1]) + (n - 1) * (a[n * m - 1] - a[1]));
		ans = max(ans, (m - 1) * (a[n * m - 1] - a[1]) + (n - 1) * (a[n * m] - a[1]));
		ans = ans + (n - 1) * (m - 1) * (a[n * m] - a[1]);
		cout << ans << endl;
	}

	return 0;
}