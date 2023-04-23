#include <iostream>

using namespace std;

int solve(long long int x) {
	long long int ret = 0;
	while (x) {
		ret += x % 10;
		x /= 10;
	}
	return ret;
}

int gcd(long long int x, long long int y) {
	return y == 0 ? x : gcd(y, x % y);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n, k;
		cin >> n;
		while (1) {
			k = solve(n);
			if (gcd(n, k) > 1) {
				break;
			}
			n++;
		}
		cout << n << endl;
	}
}