#include <iostream>

using namespace std;

void solve() {
	int n, a, b, c, d; 
	cin >> n >> a >> b >> c >> d;
	a--, b--, c--, d--;
	int x = min(min(a, n - a - 1), min(b, n - b - 1));
	int y = min(min(c, n - c - 1), min(d, n - d - 1));
	cout << abs(x - y) << endl;
}

int main() {
	int t; 
	cin >> t;
	while (t--)solve();

	return 0;
}