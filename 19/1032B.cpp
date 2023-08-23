#include<iostream>
#include <cstring>

using namespace std;

int main() {
	int r, c;
	char str[111];
	cin >> str;
	int len = strlen(str);
	r = ((len + 19) / 20);
	c = (len + r - 1) / r;

	int s = abs(len - (r * c));

	int idx = 0;

	cout << r << " " << c << endl;
	for (int i = 0, j = 0; i < r; i++) {
		if (s) {
			cout << "*";
			s--;
			j = 1;
		}
		else j = 0;

		for (; j < c; j++) {
			cout << str[idx++];
		}
		cout << endl;
	}
	return 0;
}