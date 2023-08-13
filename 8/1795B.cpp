#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		bool f1 = false, fr = false;
		for (int i = 0; i < n; i++) {
			int l, r;
			cin >> l >> r;
			if (l == k) {
				f1 = true;
			}
			if (r == k) {
				fr = true;
			}

		}
		if (f1 && fr) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}