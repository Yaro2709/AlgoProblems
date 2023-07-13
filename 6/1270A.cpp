#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x = 0;
		int y = 0;
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		while (k1--) {
			int a;
			cin >> a;
			x = max(x, a);
		}
		while (k2--) {
			int a;
			cin >> a;
			y = max(y, a);
		}
		cout << (x > y ? "YES\n" : "NO\n");
	}

	return 0;
}