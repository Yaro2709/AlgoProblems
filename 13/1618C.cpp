#include<iostream>
#include<vector>

using namespace std;

long long gcd(long long x, long long y) {
	if (x % y == 0) return y;
	return gcd(y, x % y);
}

int main() {

	int t;
	cin >> t;

	for (int z = 0; z < t; z++) {

		int n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];

		long long g = a[0];
		for (int i = 2; i < n; i += 2) g = gcd(g, a[i]);
		long long h = a[1];
		for (int i = 3; i < n; i += 2) h = gcd(h, a[i]);

		long long rtn = 0;
		int found = 0;
		for (int i = 0; i < n; i += 2) {
			if (a[i] % h == 0) found = 1;
		}
		if (found == 0) rtn = h;
		found = 0;
		for (int i = 1; i < n; i += 2) {
			if (a[i] % g == 0) found = 1;
		}
		if (found == 0) rtn = g;


		cout << rtn << endl;
	}

	return 0;
}