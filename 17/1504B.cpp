#include<iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int *s = new int[n];
	s[0] = (a[0] == '1');
	for (int i = 1; i < n; i++) {
		if (a[i] == '1') s[i] = 1 + s[i - 1];
		else s[i] = s[i - 1];
	}
	bool same = 1;
	for (int i = n - 1; i >= 0; i--) {
		if (same) {
			if (a[i] != b[i]) {
				if ((i & 1) && s[i] == (i + 1) / 2) {
					same = 0;
				}
				else {
					cout << "NO\n";
					return;
				}
			}
		}
		else {
			if (a[i] == b[i]) {
				if ((i & 1) && s[i] == (i + 1) / 2) {
					same = 1;
				}
				else {
					cout << "NO\n";
					return;
				}
			}
		}
	}
	cout << "YES\n";

	delete[] s;
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();

	return 0;
}