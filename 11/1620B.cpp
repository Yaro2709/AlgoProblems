#include <iostream>

using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--) {
		long long int w, h;
		cin >> w >> h;
		long long int a[4];
		for (int i = 0; i < 4; i++) {
			long long int p;
			cin >> p;
			long long int *h = new long long int[p];
			for (int j = 0; j < p; j++) {
				cin >> h[j];
			}
			a[i] = h[p - 1] - h[0];

			delete[] h;
		}
		cout << (max(max(a[0] * h, a[1] * h), max(a[2] * w, a[3] * w))) << endl;
	}

	return 0;
}