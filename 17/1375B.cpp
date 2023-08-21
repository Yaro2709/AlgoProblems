#include<iostream>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int** a = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[m];
		}

		int f = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];

				if ((i == 0 || i == n - 1) && (j == 0 || j == m - 1)) {
					if (a[i][j] > 2) {
						f = 1;
					}
					else {
						a[i][j] = 2;
					}
				}
				else if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
					if (a[i][j] > 3) {
						f = 1;
					}
					else {
						a[i][j] = 3;
					}
				}
				else {
					if (a[i][j] > 4) {
						f = 1;
					}
					else {
						a[i][j] = 4;
					}
				}
			}

		}

		if (f == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		}

		for (int i = 0; i < n; i++)
		{
			delete[] a[i]; 
		}
		delete[] a; 
	}

	return 0;
}