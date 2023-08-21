#include<iostream>
#include<map>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int[n];
		long long sum = 0;
		map<int, int> mp;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum = sum + a[i];
			mp[a[i]]++;
		}
		if ((2 * sum) % n != 0) {
			cout << 0 << endl;
		}
		else {
			long long res = 0;
			for (int i = 0; i < n; ++i) {
				int x = a[i];
				int y = (2 * sum) / n - a[i];
				if (mp.count(y)) {
					res = res + mp[y];
				}
				if (x == y) {
					res = res - 1;
				}
			}
			cout << res / 2 << endl;

		}

		delete[] a;
	}

	return 0;
}