#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;

		int f1 = 0, f2 = 0;
		int sum = 0;

		for (int j = 0; j < s.length(); ++j) {
			if (!f1 && s[j] == '0') {
				f1 = 1;
			}
			else if ((s[j] - '0') % 2 == 0) {
				f2 = 1;
			}
			sum += s[j] - '0';
		}

		if (f1 && f2 && sum % 3 == 0) {
			cout << "red\n";
		}
		else {
			cout << "cyan\n";
		}
	}

	return 0;
}