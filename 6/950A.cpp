#include<iostream>

using namespace std;

int main() {
	int l, r, a;
	cin >> l >> r >> a;
	while (a >= 1) {
		if (r >= l) {
			l++;
			a--;
		}
		else {
			r++;
			a--;
		}
	}
	cout << min(l, r) * 2;

	return 0;
}