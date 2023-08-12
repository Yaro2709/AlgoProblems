#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int x, n;
		cin >> x >> n;
		long long int a;
		a = n % 4;
		for (int i = 1; i <= a; i++) {
			if (x % 2) {
				x += n - a + i;

			}
			else {
				x -= n - a + i;

			}

		}
		cout << x << endl;
	}

	return 0;
}