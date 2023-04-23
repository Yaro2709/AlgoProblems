#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x, y;
		cin >> x >> y;
		if (x == y) {
			cout << y + x << endl;
		}
		else {
			cout << (max(x, y) * 2) - 1 << endl;
		}
	}

	return 0;
}