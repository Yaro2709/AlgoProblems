#include<iostream>

using namespace std;

int n, m, mn, mx, mn1 = 1e3, mx1 = 0;

int main() {
	cin >> n >> m >> mn >> mx;
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		mn1 = min(mn1, x);
		mx1 = max(mx1, x);
	}
	if (mx1 > mx || mn1 < mn) {
		cout << "Incorrect" << endl;
		return 0;
	}
	int x = 2;
	if (mx1 == mx)x--;
	if (mn1 == mn)x--;
	if (n - m < x) {
		cout << "Incorrect" << endl;
		return 0;
	}
	else
		cout << "Correct" << endl;

	return 0;
}