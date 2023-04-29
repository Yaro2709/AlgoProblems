#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int x1 = 0, x2 = 0, y1 = 0, y2 = 0, a, b;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (x1 < a) {
				x1 = a;
			}
			if (x2 > a) {
				x2 = a;
			}
			if (y1 < b) {
				y1 = b;
			}
			if (y2 > b) {
				y2 = b;
			}
		}
		cout << 2 * (x1 + y1 - y2 - x2) << endl;
	}
	return 0;
}