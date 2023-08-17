#include <iostream>

using namespace std;

int main() {
	int n; 
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n % 2 != 0) {
		if (a[0] % 2 != 0 && a[n - 1] % 2 != 0) {
			cout << "YES";
			return 0;
		}

	}
	cout << "NO";

	delete[] a;

	return 0;
}