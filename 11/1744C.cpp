#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		char ch;
		string s;
		cin >> n >> ch >> s;
		int ans = 0;
		int cnt = 0;
		int i, j = 1;
		for (i = 0; i < n; i++) {
			if (s[i] == ch && j) {
				while (s[i] != 'g') {
					cnt++;
					i++;
					if (i == n) {
						j = 0;
						i = 0;
					}
				}
				ans = max(ans, cnt);
				cnt = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}