#include<iostream>
#include<string>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int res = INT_MAX;
	long long power = 1;
	string s = to_string(n);
	int len = s.length();
	for (long long k = 0; k < 62; k++) {
		power = (1LL << k);
		string p = to_string(power);
		int len2 = p.length();
		int i = 0;
		int j = 0;
		int common = 0;
		while (i < len && j < len2) {
			if (s[i] == p[j]) {
				i++;
				j++;
				common++;
			}
			else {
				i++;
			}
		}

		int ans = len - common + len2 - common;
		res = min(res, ans);

	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}