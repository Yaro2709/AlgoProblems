#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (; t--;) {
		int n;
		cin >> n;
		if (n == 1) {
			cout << 1 << '\n';
			continue;
		}
		if (n == 2) {
			cout << "2 1\n";
			continue;
		}
		int top = 3;
		for (int i = 0; i < n - 1; ++i) {
			if (i == n / 2)
				cout << 1 << ' ';
			else
				cout << top++ << ' ';
		}
		cout << 2 << '\n';
	}

	return 0;
}