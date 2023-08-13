#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		char a = s[0];
		char c = s[s.length() - 1];
		int a1 = 1;
		int a2 = 1;
		int l = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == a) {
				l += 1;
			}
			else {
				l -= 1;
				if (l < 0) {
					a1 = 0;
					break;
				}
			}
		}
		if (l != 0) {
			a1 = 0;
		}
		int r = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == c) {
				r -= 1;
				if (r < 0) {
					a1 = 0;
					break;
				}
			}
			else {
				r += 1;
			}
		}
		if (r != 0) {
			a2 = 0;
		}
		if (a1 == 1 or a2 == 1) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}

	return 0;
}