#include <iostream>
#include <algorithm>

using namespace std;

const int N = 101;

int a[N];

int main()
{
	int t;
	int n, l, r, k;
	int i;
	int ans;

	cin >> t;
	while (t--)
	{
		cin >> n >> l >> r >> k;
		for (i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1);
		for (i = 1, ans = 0; i <= n; i++)
			if (l <= a[i] && a[i] <= r && a[i] <= k)
			{
				ans++;
				k -= a[i];
			}
		cout << ans << endl;
	}

	return 0;
}