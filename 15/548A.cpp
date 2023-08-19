#include<iostream>

using namespace std;

int main() {
	string s;
	int k;

	cin >> s >> k;
	int wordLength = s.length() / k;
	if (s.length() % k != 0) {
		cout << "NO" << endl;
		return 0;
	}
	for (int x = 0; x < k; x++) {
		for (int y = 0; y < wordLength / 2 + (wordLength % 2); y++) {
			if (s[x * wordLength + y] != s[(x + 1) * wordLength - 1 - y]) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}