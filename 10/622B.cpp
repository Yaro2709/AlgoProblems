#include <iostream>

using namespace std;

int main() {
	string s;
	int a, h, m;
	cin >> s >> a;
	h = (s[0] - '0') * 10 + s[1] - '0';
	m = (s[3] - '0') * 10 + s[4] - '0';
	m += a;

	int pt = m / 60;
	m %= 60;
	h += pt;
	h %= 24;
	s[0] = h / 10 + '0';
	s[1] = h % 10 + '0';
	s[3] = m / 10 + '0';
	s[4] = m % 10 + '0';

	cout << s << endl;

	return 0;
}