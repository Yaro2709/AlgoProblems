#include <iostream>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (k > n) cout << k - n << endl;
		else {
			if (n % 2 == k % 2) cout << "0" << endl;
			else cout << "1" << endl;
		}
	}

	return 0;
}