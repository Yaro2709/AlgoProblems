#include<iostream>

using namespace std;

typedef long long LL;

int main() {
	int t;
	cin >> t;
	while (t--) {
		LL n, k, g;
		cin >> n >> k >> g;
		LL a = (g + 2 - 1) / 2 - 1;
		LL b = a * n;
		LL sum = g * k;
		if (k == 0) {
			cout << 0 << endl;
			continue;
		}
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}
		if (sum < b) {
			cout << sum << endl;
		}
		else {
			LL c = sum - b;
			cout << sum - ((c + g - 1) / g * g) << endl;
		}
	}

	return 0;
}