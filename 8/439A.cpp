#include <iostream>

using namespace std;

int main() {
	int n, d, k, f;
	cin >> n >> d;
	k = n - 1;
	k *= 2;
	d -= 5 * k;
	while (n--) {
		cin >> f;
		d -= f;
	}
	if (d < 0) {
		cout << -1;
		return 0;
	}
	k += d / 5;
	cout << k;

	return 0;
}