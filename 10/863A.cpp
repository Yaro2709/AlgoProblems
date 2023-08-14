#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int i = 0, j = s.length() - 1;
	while (i < j) {
		if (s[j] == 48) {
			j--;
		}
		else {
			break;
		}
	}
	for (int i = 0; i <= j / 2; i++) {
		if (s[i] != s[j - i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}