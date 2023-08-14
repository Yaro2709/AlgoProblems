#include <iostream>

using namespace std;

int main() {
	long long int a, b; 
	cin >> a >> b;
	if (a == 1 && b == 10) {
		cout << -1;
		return 0;
	}
	if (b != 10) {
		for (int i = 0; i < a; i++) {
			cout << b;
		}
	}
	else {
		for (int i = 0; i < a - 1; i++) {
			cout << 1;
		}
		cout << 0;
	}

	return 0;
}