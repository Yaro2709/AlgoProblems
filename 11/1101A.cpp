#include <iostream>

using namespace std;

int main() {
	int q;
	cin >> q;
	for (int k = 1; k <= q; k++) {
		int l, r, d;
		cin >> l >> r >> d;

		if (d < l)	cout << d << endl;
		else		cout << (r / d + 1) * d << endl;
	}

	return 0;
}