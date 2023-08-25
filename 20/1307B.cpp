#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x, a, mx = 0;
		bool m = false;
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a > x) m = true;
			else mx = max(mx, a);
		}
		if (m && mx == x) cout << 1 << '\n';
		else if (m) cout << 2 << '\n';
		else cout << (x + mx - 1) / mx << '\n';
	}

	return 0;
}