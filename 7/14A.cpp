#include<iostream>

using namespace std;

int main() {
	string s[55];
	int r, c;
	cin >> r >> c;
	int r1 = 55, r2 = 0, c1 = 55, c2 = 0;
	for (int i = 0; i < r; i++)	cin >> s[i];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (s[i][j] == '*') {
				r1 = min(r1, i);
				r2 = max(r2, i);
				c1 = min(c1, j);
				c2 = max(c2, j);
			}
		}
	}

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			cout << s[i][j];
		}
		cout << endl;
	}

	return 0;
}