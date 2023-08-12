#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n, x = 0, y = 0;
		cin >> n;
		while (n % 2 == 0) {
			n = n / 2;
			x++;
		}
		while (n % 3 == 0) {
			n = n / 3;
			y++;
		}
		if (n == 1 && y >= x)
			cout << y + y - x << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}