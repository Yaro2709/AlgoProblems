#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	int *a = new int[2 * n];
	for (int i = 0; i < 2 * n; i++) {
		cin >> a[i];
	}
	sort(a, a + 2 * n);
	if (a[0] == a[2 * n - 1]) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << a[i] << " ";
	}

	delete[] a;

	return 0;
}