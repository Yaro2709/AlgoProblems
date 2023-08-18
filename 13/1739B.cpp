#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int *a = new int[n + 1];
		int *b = new int[n + 1];
		for (int j = 1; j < n + 1; j++) {
			cin >> b[j];
		}
		a[0] = 0;
		int sum = 0;
		for (int j = 1; j < n + 1; j++) {
			a[j] = a[j - 1] + b[j];
			if (a[j - 1] >= b[j] && a[j - 1] - b[j] != a[j]) {
				sum = 1;
				break;
			}
		}
		if (sum == 1) {
			cout << -1 << endl;
		}
		else {
			for (int I = 1; I <= n; I++) {
				cout << a[I] << " ";
			}
			cout << endl;
		}

		delete[] a;
		delete[] b;
	}
	return 0;
}