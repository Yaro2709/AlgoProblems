#include <iostream>

using namespace std;

void check() {
	int n, q, i, f, j, l, r;
	cin >> n >> q;
	string arr;
	cin >> arr;
	for (j = 0; j < q; j++) {
		cin >> l >> r;
		f = 0;
		for (i = 0; i < l - 1; i++) {
			if (arr[i] == arr[l - 1]) {
				f = 1;
				break;
			}
		}
		for (i = r; i < n; i++) {
			if (arr[i] == arr[r - 1]) {
				f = 1;
				break;
			}
		}
		if (f)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		check();
	}

	return 0;
}