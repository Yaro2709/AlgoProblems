#include <iostream>

using namespace std;

int main() {
	string s;
	int f = 0;
	cin >> s;
	if (s.size() >= 3) {
		for (int i = 0; i < s.size() - 2; i++) {
			if (s[i] + s[i + 1] + s[i + 2] == +'A' + 'B' + 'C' && s[i] != s[i + 1] && s[i] != s[i + 2]) {
				f = 1;
			}
		}
	}

	if (f)	cout << "Yes";
	else	cout << "No";

	return 0;
}