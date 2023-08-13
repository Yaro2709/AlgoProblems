#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110;

int a[N];
int b[N];

void solve()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		cin >> b[i];
	}

	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + n);

	for (int i = 1; i <= n; ++i)
	{
		if (b[i] - a[i] < 0 || b[i] - a[i]>1)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}