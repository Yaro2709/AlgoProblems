#include<iostream>

using namespace std;

const int N = 200010;
int a[N], b[N], c[N], d[N];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			int x = i - b[a[i]] - 1;
			if (x >= c[a[i]]) {
				d[a[i]] = c[a[i]];
				c[a[i]] = x;
			}
			if (x < c[a[i]] && x >= d[a[i]]) {
				d[a[i]] = x;
			}
			b[a[i]] = i;
		}
		for (int i = 1; i <= m; i++) {
			int x = n - b[i];
			if (x >= c[i]) {
				d[i] = c[i];
				c[i] = x;
			}
			if (x < c[i] && x >= d[i]) {
				d[i] = x;
			}
		}
		int res = 1e9;
		for (int i = 1; i <= m; i++) {
			c[i] = c[i] / 2;
			res = min(res, max(c[i], d[i]));
		}
		cout << res << endl;
		for (int i = 1; i <= n; i++) {
			b[i] = 0;
		}
		for (int i = 1; i <= m; i++) {
			c[i] = d[i] = 0;
		}
	}
	return 0;
}