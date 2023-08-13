#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int q;
	cin >> q;
	for (int i = 1; i <= q; i++) {
		int n, k;
		cin >> n >> k;
		int *a = new int[n];
		for (int j = 0; j < n; j++) cin >> a[j];
		sort(a, a + n);
		if (abs(a[0] + k - a[n - 1]) <= k) cout << a[0] + k << endl;
		else cout << "-1\n";

		delete[] a;
	}

	return 0;
}