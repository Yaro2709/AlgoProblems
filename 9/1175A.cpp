#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long int n, k;
		cin >> n >> k;
		long long int ans = 0;
		while (n != 0) {
			ans += (n % k) + 1;
			n -= n % k;
			n /= k;
		}
		cout << ans - 1 << "\n";
	}

	return 0;
}