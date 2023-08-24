#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int[n]; 
		int m = INT_MAX, pos;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] < m) {
				m = a[i];
				pos = i;
			}
		}
		cout << n - 1 << '\n';
		for (int i = 0; i < n; ++i) {
			if (i != pos) cout << pos + 1 << ' ' << i + 1 << ' ' << m << ' ' << m + abs(pos - i) << '\n';
		}

		delete[] a;
	}

	return 0;
}