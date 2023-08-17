#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	long tong = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tong += a[i];
	}

	if (a[0] + a[0] != tong && n != 1) {
		cout << 1 << endl << 1;
	}
	else if (n > 2) {
		cout << 2 << endl << 1 << " " << 2;
	}
	else cout << -1;

	delete[] a;

	return 0;
}