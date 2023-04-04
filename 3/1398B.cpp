#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		vector<int> v;
		int last = 0;
		for (int i = 0; i < s.length(); i++) {
			if (i == s.length() - 1 || s[i] != s[i + 1]) {
				if (s[i] == '1') {
					v.push_back(i - last + 1);
				}
				last = i + 1;
			}
		}

		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());

		int ans = 0;
		for (int i = 0; i < (v.size() + 1) / 2; i++) {
			ans += v[i * 2];
		}
		cout << ans << endl;
	}

	return 0;
}