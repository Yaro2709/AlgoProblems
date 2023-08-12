#include <iostream>

using namespace std;

int main() {
	int a;
	string n, x = "";
	cin >> a >> n;
	x += n[0];
	for (int i = 1; i < a; i++) {
		if ((a - i + 1) % 2 == 0) {
			x = x + n[i];
		}
		else {
			x = n[i] + x;
		}
	}
	cout << x;

	return 0;
}