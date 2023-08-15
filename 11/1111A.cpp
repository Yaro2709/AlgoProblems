#include <iostream>

using namespace std;

int main() {
	string a, b;
	int p = 1, x, y;
	cin >> a >> b;
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == 'a' || a[i] == 'i' || a[i] == 'u' || a[i] == 'e' || a[i] == 'o') x = 1;
			else x = 0;
			if (b[i] == 'a' || b[i] == 'i' || b[i] == 'u' || b[i] == 'e' || b[i] == 'o') y = 1;
			else y = 0;
			if (x != y) { p = 0; break; }
		}
	}
	else p = 0;
	if (p) cout << "Yes\n";

	return 0;
}