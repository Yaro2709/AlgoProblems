#include<iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c = 0, p = 0;
	for (int i = 0; i < n / 2; ++i) {
		if (s[i] == s[n - 1 - i]) {
			c = 0;
		}
		else {
			if (c == 0) ++p;
			++c;
		}
	}

	if (p > 1) cout << "No" << endl;
	else cout << "Yes" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();

	return 0;
}