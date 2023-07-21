#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;
		bool ok = false;
		for (int i = 0; i < n - m + 1; i++) {
			if (a[i] == b[0]) {
				ok = true;
				break;
			}
		}

		for (int i = 1; i < m; i++) {
			if (a[i + n - m] != b[i]) {
				ok = false;
			}
		}

		if (ok) cout << "YES" << endl;
		else	cout << "NO" << endl;
	}

	return 0;
}