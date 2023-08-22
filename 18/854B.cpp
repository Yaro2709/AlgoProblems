#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	cout << ((k > 0) && (k < n)) << " ";
	if (k <= n / 3) {
		cout << 2 * k << "\n";
	}
	else {
		cout << n - k << "\n";
	}

	return 0;
}