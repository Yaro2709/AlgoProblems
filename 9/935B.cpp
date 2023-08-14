#include <iostream>

using namespace std;

int main() {
	int l;	
	cin >> l;
	string s;	
	cin >> s;
	int x = 0, y = 0, pay = 0;
	for (int i = 0; i < l; i++) {
		if (s[i] == 'U') {
			y++;
		}
		else if (s[i] == 'R') {
			x++;
		}
		if (x == y && i + 1 != l) {
			if (s[i] == 'R' && s[i + 1] == 'R') {
				pay++;
			}
			else if (s[i] == 'U' && s[i + 1] == 'U') {
				pay++;
			}
		}
	}
	cout << pay;

	return 0;
}