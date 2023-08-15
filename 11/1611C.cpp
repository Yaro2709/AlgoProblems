#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++)cin >> a[i];
		if (a[0] == n || a[n - 1] == n) {
			cout << n << " ";
			if (a[0] == n) {
				for (int j = n - 1; j > 0; j--)cout << a[j] << " ";
				cout << endl;
			}
			else {
				for (int j = n - 2; j >= 0; j--) {
					cout << a[j] << " ";
				}
				cout << endl;
			}
		}
		else {
			cout << -1 << endl;
		}

		delete[] a;
	}
	return 0;
}