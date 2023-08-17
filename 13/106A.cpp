#include <iostream>

using namespace std;

int num(char c) {
	if (c == 'T')
		return 10;
	if (c == 'J')
		return 11;
	if (c == 'Q')
		return 12;
	if (c == 'K')
		return 13;
	if (c == 'A')
		return 14;
	return (c - '0');
}

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	if (b[1] == c[1]) {
		if (num(b[0]) > num(c[0])) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		if (b[1] == a[0]) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}