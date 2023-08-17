#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		s += "R";
		int res = 0, cat = -1;
		for (int i = 0; i < s.length(); i++) {
			char ch = s[i];
			if (ch == 'R')
				res = max(res, i - cat - 1), cat = i;
		}
		cout << res + 1 << '\n';
	}

	return 0;
}