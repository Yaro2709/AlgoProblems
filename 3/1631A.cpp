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

		int* b = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		int p = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] < b[i]) {
				p = a[i];
				a[i] = b[i];
				b[i] = p;
			}
		}

		int max_a = 0;
		int max_b = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > max_a) {
				max_a = a[i];
			}
			if (b[i] > max_b) {
				max_b = b[i];
			}
		}

		cout << max_a * max_b <<endl;

		delete[] a;
		delete[] b;
	}

	return 0;
}