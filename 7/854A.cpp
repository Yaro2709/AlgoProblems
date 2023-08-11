#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2) {
		cout << n / 2 << " " << n - n / 2;
	}
	else {
		int a = n / 2;
		if (a % 2) {
			cout << a - 2 << " " << a + 2;
		}
		else {
			cout << a - 1 << " " << a + 1;
		}
	}
	return 0;
}