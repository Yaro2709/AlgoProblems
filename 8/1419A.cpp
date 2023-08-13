#include <iostream>

using namespace std;

string s;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		cin >> s;
		int ji = 0, ou = 0;
		for (int i = 0; i < n; i++) {
			int num = s[i] - '0';
			if (!(i & 1) && !(num & 1)) ji++;
			else if (i & 1 && num & 1) ou++;
		}
		if (n & 1) {
			if (ji == n / 2 + 1) {
				cout << 2 << '\n';
			}
			else {
				cout << 1 << '\n';
			}
		}
		else {
			if (ou == n / 2) {
				cout << 1 << '\n';
			}
			else {
				cout << 2 << '\n';
			}
		}
	}

	return 0;
}