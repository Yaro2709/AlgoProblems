#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int l = a[1] - x, r = a[1] + x;
	int ans = 0;
	for (int i = 2; i <= n; i++)
	{
		int j = a[i] - x, k = a[i] + x;
		l = max(l, j), r = min(r, k);
		if (l > r)
		{
			ans++;
			l = j, r = k;
		}
	}
	cout << ans << "\n";
}

int main()
{
	int t;
	for (cin >> t; t; t--)
		solve();

	return 0;
}