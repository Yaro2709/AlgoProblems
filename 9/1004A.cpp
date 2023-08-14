#include <iostream>

using namespace std;

int a[10000001];

int main() {
	int n, d;
	cin >> n >> d;
	int ans = 2;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[i + 1] - a[i] > 2 * d) {
			ans += 2;
		}
		if (a[i + 1] - a[i] == 2 * d) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}