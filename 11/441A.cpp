#include <iostream>

using namespace std;

int main() {

	int n, v, x = 0, y = 0;
	cin >> n;
	cin >> v;
	int *a = new int[n];
	int k[50];
	int *b = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		for (int j = 0; j < a[i]; j++) {
			cin >> k[j];
			if (v > k[j]) {
				x = 1;
			}

		}
		if (x == 1) {
			b[y] = i;
			y++;
		}
		x = 0;
	}
	cout << y << endl;
	for (int i = 0; i < y; ++i)
	{
		cout << b[i] + 1 << " ";
	}

	delete[] a;
	delete[] b;

	return 0;
}