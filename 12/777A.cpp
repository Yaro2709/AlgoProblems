#include <iostream>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	n = n % 6;
	while (n--) {
		if (n % 2) { if (x != 0) x = 3 - x; }
		else { if (x != 2) x = 1 - x; }
	}
	cout << x;
	return 0;
}