#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n;
		cin >> n;

		int* a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int r_n = 0;
		for (int i = 1; i < n; i++) {
			if (a[i - 1] == a[i]) {
				r_n += 1;
			}
		}

		if ((r_n) == (n - 1)) {
			for (int i = 0; i < n; i++) {
				cout << 0 << endl;
			}

			delete[] a;

			continue;
		}

		int max_1 = 0;
		int max_1_i = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > max_1) {
				max_1 = a[i];
				max_1_i = i;
				
			}
		}
		a[max_1_i] = 0;

		int max_2 = 0;
		int max_2_i = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > max_2) {
				max_2 = a[i];
				max_2_i = i;

			}
		}
		a[max_1_i] = max_1;

		for (int i = 0; i < n; i++) {
			if (a[i] != max_1) {
				a[i] -= max_1;
			}
			else {
				a[i] -= max_2;
			}
		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << endl;
		}

		delete[] a;
	}

	return 0;
}