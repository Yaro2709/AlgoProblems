#include <iostream>

using namespace std;

long long int a[100100];

int main() {
	long long int n, k, b, s;
	int t;
	cin >> t;
	for (long long int z = 1; z <= t; z++) {
		cin >> n >> k >> b >> s;
		if (s<k * b || s>k * b + (k - 1) * n) {
			cout << -1 << endl;
			continue;
		}
		long long int res = s - k * b;

		for (int i = 0; i < n; i++) {
			a[i] = (b / n) * k;
		}
		a[n - 1] += (b % n) * k;
		for (int i = 0; i < n; i++) {
			if (res) {
				a[i] += min(res, k - 1);
				res -= min(res, k - 1);
			}
			else
				break;
		}
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}

	return 0;
}