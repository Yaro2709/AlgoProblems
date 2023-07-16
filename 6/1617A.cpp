#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Gcd(int x, int y) {
	if (x == 0) {
		return y;
	}
	if (x > y) {
		return Gcd(x % y, y);
	}
	return Gcd(y % x, x);
}

void solve() {
	string s, T;
	cin >> s >> T;
	if (T == "abc") {
		vector<string> cnt(26);
		for (int i = 0; i < (int)s.size(); ++i) {
			cnt[s[i] - 'a'] += s[i];
		}
		if (cnt[0].size() > 0 && (cnt[1].size() > 0 && cnt[2].size() > 0)) {
			cout << cnt[0] << cnt[2] << cnt[1];
			for (int i = 3; i < 26; ++i) {
				cout << cnt[i];
			}
			cout << '\n';
			return;
		}
	}
	sort(begin(s), end(s));
	cout << s << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}