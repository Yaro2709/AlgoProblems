#include<iostream>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		string *s = new string[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		bool ok = true;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (s[i][j] == '1' && s[i + 1][j] == '0' && s[i][j + 1] == '0') {
					ok = false;
				}
			}
		}
		cout << (ok ? "YES\n" : "NO\n");

		delete[] s;
	}

	return 0;
}