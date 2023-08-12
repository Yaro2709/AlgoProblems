#include <iostream>

using namespace std;

const int N = 2e5 + 5;

int a[N];
int s[N];

void solve()
{
	int n, q; cin >> n >> q;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}

	while (q--)
	{
		int l, r, k; cin >> l >> r >> k;
		int sum = s[n] - (s[r] - s[l - 1]) + (r - l + 1) * k;
		if (sum % 2 == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}