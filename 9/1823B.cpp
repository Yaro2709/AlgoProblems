#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int* p = new int[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> p[i];
		}

		int nonMultiple = 0;
		for (int i = 1; i <= n; i++) {
			if (abs(p[i] - i) % k != 0) nonMultiple++;
		}

		if (nonMultiple == 0) cout << 0 << endl;
		else if (nonMultiple == 2) cout << 1 << endl;
		else cout << -1 << endl;
	}
	return 0;
}