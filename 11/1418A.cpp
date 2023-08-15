#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int x, y, k;
		cin >> x >> y >> k;
		long long int ans = (k * y + k - 1 + x - 2) / (x - 1) + k;
		cout << ans << endl;
	}

	return 0;
}