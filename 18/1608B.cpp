#include<iostream>
#include<math.h>

using namespace std;

const int MAX = 1e5 + 1;
int p[MAX];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		if (abs(a - b) > 1) {
			cout << "-1\n";
			continue;
		}
		if (max(a, b) > (n - 1) / 2 || a + b > n - 2) {
			cout << "-1\n";
			continue;
		}
		fill(p, p + n, 0);
		if (a >= b) {
			for (int i = 0; i < a; i++) {
				p[1 + 2 * i] = n - i;
			}
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				if (p[i] != 0) {
					continue;
				}
				p[i] = ++cnt;
			}
			if (a > b) {
				reverse(p + (2 * a), p + n);
			}
			for (int i = 0; i < n; i++) {
				cout << p[i] << ' ';
			}
		}
		else {
			swap(a, b);
			for (int i = 0; i < a; i++) {
				p[1 + 2 * i] = n - i;
			}
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				if (p[i] != 0) {
					continue;
				}
				p[i] = ++cnt;
			}
			reverse(p + (2 * a), p + n);
			for (int i = 0; i < n; i++) {
				cout << n - p[i] + 1 << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}