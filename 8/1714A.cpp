#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, h, m;
		cin >> n >> h >> m;
		int minv = 10000;
		for (int i = 1, a, b; i <= n; i++) {
			cin >> a >> b;
			if (a > h || (a == h && b >= m)) {
				minv = min(minv, (a - h) * 60 + b - m);
			}
			else {
				minv = min(minv, 24 * 60 - (h - a) * 60 - m + b);
			}
		}
		cout << minv / 60 << " " << minv % 60 << endl;
	}
	return 0;
}