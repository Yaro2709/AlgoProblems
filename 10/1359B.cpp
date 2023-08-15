#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void solve() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	vector < vector < char > > a(n, vector < char >(m, 'a'));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	y = min(y, 2 * x);

	long long int res = 0;
	for (int i = 0; i < n; i++) {
		int id = 0;
		while (id < m) {
			if (a[i][id] == '*') {
				id++;
				continue;
			}
			if (id < m - 1 && a[i][id + 1] == '.') {
				res += y;
				id += 2;
			}
			else {
				res += x;
				id++;
			}
		}
	}
	cout << res << "\n";
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}