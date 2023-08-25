#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, x1, y1, x2, y2, w, h;
		cin >> n >> m;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> w >> h;
		if (w > n || h > m || w + (x2 - x1) > n && h + (y2 - y1) > m) cout << -1 << endl;
		else
		{
			int x = 0, y = 0;
			x = max(x1, n - x2);
			y = max(y1, m - y2);
			if (w + (x2 - x1) > n) x = 1e9;
			else x = max(0, w - x);
			if (h + (y2 - y1) > m) y = 1e9;
			else y = max(0, h - y);

			cout << setprecision(9) << fixed << 1.0 * min(x, y) << endl;
		}
	}
	return 0;
}