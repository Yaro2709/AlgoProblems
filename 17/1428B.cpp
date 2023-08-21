#include<iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	while (TC--) {
		int n; cin >> n;
		string s; cin >> s;

		bool hasCW = false;
		bool hasCCW = false;
		for (int i = 0; i < n; i++) {
			if (s[i] == '<') hasCW = true;
			if (s[i] == '>') hasCCW = true;
		}

		if (hasCW && hasCCW) {
			int ans = 0;
			s += s[0];
			for (int i = 0; i < n; i++) {
				if (s[i] == '-' || s[i + 1] == '-') ans++;
			}
			cout << ans << "\n";
		}
		else {
			cout << n << "\n";
		}
	}

	return 0;
}