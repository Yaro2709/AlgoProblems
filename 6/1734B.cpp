#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (i == 1) {
				cout << "1\n";
			}
			else {
				cout << "1 ";
				for (int j = 0; j < i - 2; j++) {
					cout << "0 ";
				}
				cout << "1\n";
			}
		}
	}

	return 0;
}