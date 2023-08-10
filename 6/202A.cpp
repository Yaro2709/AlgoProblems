#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());
	cout << s[0];
	for (int i = 1; i < s.size(); i++) {
		if (s[0] == s[i]) {
			cout << s[i];
		}
	}

	return 0;
}