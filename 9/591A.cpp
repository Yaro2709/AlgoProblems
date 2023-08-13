#include <iostream>

using namespace std;

int main() {
	float l, p, q;
	cin >> l >> p >> q;
	float ans = (l * p) / (p + q);
	cout << ans;

	return 0;
}