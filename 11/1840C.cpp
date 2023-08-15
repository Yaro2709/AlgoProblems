#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, q;
		cin >> n >> k >> q;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int l = 1;
		long long int num = 0, ans = 0;
		while (l <= n) {
			if (a[l] <= q) {
				num++;
				if (num >= k) {
					ans = ans + (num - k + 1);
				}
			}
			else {
				num = 0;
			}
			l++;
		}
		cout << ans << '\n';
	}

	return 0;
}