#include <iostream>
#include <algorithm>

using namespace std;

int a[100010];

void solve(int n)
{
	sort(a + 1, a + n + 1);
	cout << min(n - 2, a[n - 1] - 1) << endl;
}

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		solve(n);
	}

	return 0;
}