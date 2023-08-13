#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, ans = 0, max_b = 0;
		long long a[1000005], b[1000005];
		cin >> n;
		for (int i = 1; i <= n; i++)cin >> a[i];
		for (int i = 1; i <= n; i++)cin >> b[i];
		for (int i = 1; i <= n; i++)max_b = max(max_b, b[i]);
		for (int i = 1; i <= n; i++) {
			ans += a[i];
			ans += b[i];
		}
		cout << ans - max_b << endl;
	}

	return 0;
}