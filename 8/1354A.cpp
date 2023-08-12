#include <iostream>

using namespace std;

void solve()
{
	long long int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b >= a)
	{
		cout << b << '\n';
		return;
	}
	a -= b;
	if (d >= c)
	{
		cout << -1 << '\n';
		return;
	}
	long long int num = (a + c - d - 1) / (c - d);
	cout << b + num * c << '\n';
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}