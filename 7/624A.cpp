#include<iostream>

using namespace std;

int main() {
	double n, m, l, t;
	cin >> n >> m >> l >> t;
	double y = (m - n) / (l + t);
	cout.precision(20);
	cout << fixed << y;

	return 0;
}