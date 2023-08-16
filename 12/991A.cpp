#include <iostream>

using namespace std;

int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	int t = a + b - c;
	int m = n - t;
	if (m <= 0 || m > n || c > a || c > b) {
		cout << -1;
		return 0;
	}
	cout << m;

	return 0;
}