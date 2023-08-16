#include <iostream>

using namespace std;

int t, n, m, q;
long long int ans, e1, o1, e2, o2;

int main()
{
	cin >> q;
	while (q--)
	{
		e1 = o1 = e2 = o2 = ans = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> t;
			if (t & 1) e1++;
			else o1++;
		}
		cin >> m;
		for (int i = 1; i <= m; i++) {
			cin >> t;
			if (t & 1) e2++;
			else o2++;
		}
		ans = e1 * e2 + o1 * o2;
		cout << ans << endl;
	}
	return 0;
}