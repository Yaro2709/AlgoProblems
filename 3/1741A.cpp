#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		char a1 = a[a.size() - 1], b1 = b[b.size() - 1];
		string c;
		if (a1 == 'S') {
			if (b1 != 'S') {
				c = "<";
			}
			else {
				if (a.size() == b.size()) {
					c = "=";
				}
				else if (a.size() > b.size()) {
					c = "<";
				}
				else {
					c = ">";
				}
			}
		}
		else if (a1 == 'M') {
			if (b1 == 'S') {
				c = ">";
			}
			else if (b1 == 'M') {
				c = "=";
			}
			else {
				c = "<";
			}
		}
		else if (a1 == 'L') {
			if (b1 == 'L') {
				if (a.size() == b.size()) {
					c = "=";
				}
				else if (a.size() > b.size()) {
					c = ">";
				}
				else {
					c = "<";
				}
			}
			else {
				c = ">";
			}
		}
		cout << c << endl;
	}
	return 0;
}