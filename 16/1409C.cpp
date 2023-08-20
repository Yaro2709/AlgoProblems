#include<iostream>

using namespace std;

void solve() {
	int n, x, y;
	cin >> n >> x >> y;
	int d = y - x, i = n - 1;
	while (i > 1 && d % i != 0) i--;
	int step = d / i;
	int f = max(x % step, y - (n - 1) * step);
	if (f == 0) f += step;
	while (n--) {
		cout << f << ' ';
		f += step;
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		solve();
		cout << '\n';
	}

	return 0;
}