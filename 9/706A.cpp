#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double x, y, a, b, c, m = 10e15;
	cin >> x >> y;
	cin >> c;
	while (cin >> a >> b >> c) m = min(m, sqrt((a - x) * (a - x) + (b - y) * (b - y)) / c);
	cout << fixed << setprecision(7) << m;

	return 0;
}