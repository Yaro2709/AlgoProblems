#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0, kol = 0;
	for (int i = 0; i < s.length(); ++i) {
		for (int j = i, k = 0; j < s.length() && k < 5; ++j, ++k) {
			if (s[j] != s[i]) {
				i = j - 1;
				break;
			}
			else if (k == 4) {
				i = j;
				break;
			}
			else if (j == s.length() - 1) {
				i = j;
				break;
			}
		}
		ans++;
	}

	cout << ans;

	return 0;
}