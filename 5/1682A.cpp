#include <iostream>

using namespace std;

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int m = (n - 1) / 2;

	int ans = 0;
	for (int i = m; i <= n - 1; i++) {
		if (s[i] == s[m]) ans++;
		else break;
	}
	for (int i = m - 1; i >= 0; i--) {
		if (s[i] == s[m]) ans++;
		else break;
	}

	cout << ans << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}