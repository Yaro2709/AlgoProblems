#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int k = m;
		while (k--) {
			int x, y;
			cin >> x >> y;
		}
		if (n == 1) {
			cout << "NO" << endl;
		}
		else {
			if (m >= n) {
				cout << "NO" << endl;
			}
			else cout << "YES" << endl;
		}
	}

	return 0;
}