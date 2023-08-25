#include<iostream>

using namespace std;

void solve() {
	int n, ans;
	cin >> n;
	ans = INT_MAX;
	for (int i = 0; i <= 15; i++) {
		for (int j = 0; j <= 15; j++) {
			if ((n + i) % (1 << j) == 0) {
				ans = min(ans, i + (15 - j));
			}
		}
	}
	cout << ans << ' ';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}