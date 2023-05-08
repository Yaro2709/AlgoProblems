#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x, a, b;
		cin >> n >> x >> a >> b;
		if (x + abs(a - b) > n - 1)
			cout << n - 1 << endl;
		else
			cout << x + abs(a - b) << endl;
	}

	return 0;
}