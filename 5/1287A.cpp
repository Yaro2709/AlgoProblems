#include <iostream>

using namespace std;

int main() {
	int T;
	for (cin >> T; T--;) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0;
		int sz = static_cast<int>(s.size());
		for (int i = sz - 1, tmp = 0; i >= 0; --i) {
			if (s[i] == 'P') tmp++;
			else ans = max(ans, tmp), tmp = 0;
		}
		cout << ans << endl;
	}
	return 0;
}