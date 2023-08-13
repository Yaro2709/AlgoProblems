#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int[n];
		int *b = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = 0;
		}
		int cream = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] > 0) { cream = max(cream, a[i]); }
			if (cream > 0) { cream--; b[i] = 1; }

		}
		for (int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;

		delete[] a;
		delete[] b;

	}

	return 0;
}