#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (abs(a) == abs(b)) {
			cout << abs(a) + abs(b) << endl;
		}
		else {
			cout << 2 * max(abs(a), abs(b)) - 1 << endl;
		}
	}
	return 0;
}