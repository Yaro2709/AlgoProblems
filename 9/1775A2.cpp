#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int k = 1;
		for (; k < s.size() && s[k] == 'b'; ++k);
		if (k == s.size())
			--k;
		if (k == 1)
			++k;

		cout << s[0] << " " << s.substr(1, k - 1) << " " << s.substr(k) << "\n";
	}

	return 0;
}