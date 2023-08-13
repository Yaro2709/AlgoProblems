#include <iostream>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, x, y;
		cin >> n >> x >> y;
		if ((x != 0 and y != 0) or (x == 0 and y == 0)) {
			cout << -1 << '\n';
		}
		else {
			x = max(x, y);
			if ((n - 1) % x == 0) {
				int val = 1;
				for (int i = 1; i <= n - 1; i++) {
					cout << val << ' ';
					if (i % x == 0) {
						val = i + 2;
					}
				}
				cout << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}