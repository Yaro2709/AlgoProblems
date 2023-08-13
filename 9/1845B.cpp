#include <iostream>

using namespace std;

void solve()
{
	int a, b, c, d, e, f; 
	cin >> a >> b >> c >> d >> e >> f;
	int x = 0, y = 0;
	if ((c >= a and e >= a) or (c <= a and e <= a)) x = min(abs(a - c), abs(a - e));
	if ((d >= b and f >= b) or (d <= b and f <= b)) y = min(abs(d - b), abs(f - b));
	cout << x + y + 1 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}