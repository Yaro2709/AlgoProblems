#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		multiset<char>s1;
		s1.insert(s[n - 1]);
		for (int i = (n - 2); i >= 0; i--) {
			if (*s1.begin() < s[i]) {
				char ch = s[i] + 1;
				s1.insert(min(ch, '9'));
			}
			else {
				s1.insert(s[i]);
			}
		}
		string ans;
		for (auto i : s1) {
			ans += i;
		}
		cout << ans << "\n";

	}

	return 0;
}