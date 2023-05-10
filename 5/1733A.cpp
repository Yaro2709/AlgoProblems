#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int tong[105];
		for (int i = 0; i < 105; i++) {
			tong[i] = 0;
		}

		int n, k;
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			int a;
			cin >> a;
			if (a > tong[i % k]) tong[i % k] = a;
		}

		long long int sum = 0;
		for (int i = 0; i < k; i++) {
			sum += tong[i];
		}
		cout << sum << endl;
	}

	return 0;
}