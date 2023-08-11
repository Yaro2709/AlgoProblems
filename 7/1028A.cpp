#include<iostream>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int l = INT_MAX, r = INT_MIN, t = INT_MIN, b = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c; cin >> c;
			if (c == 'B') {
				l = min(l, j);
				r = max(r, j);
				t = max(t, i);
				b = min(b, i);
			}
		}
	}
	cout << (t + b) / 2 + 1 << " " << (l + r) / 2 + 1 << endl;

	return 0;
}