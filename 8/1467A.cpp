#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int c = 8;
		cout << 9;
		for (int i = 2; i <= n; ++i, c++)
			cout << c % 10;
		cout << endl;
	}

	return 0;
}