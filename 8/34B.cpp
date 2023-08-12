#include <iostream>
#include <algorithm>

using namespace std;

long long int a[10000], n, m, ans;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++)
	{
		if (a[i] < 0)
		{
			ans += (0 - a[i]);
		}

	}
	cout << ans << endl;
	return 0;
}