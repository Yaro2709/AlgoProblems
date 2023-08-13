#include <iostream>

using namespace std;

void solve() {
	long long int a, b, c, d;
	cin >> a >> b >> c >> d;
	long long int x = a * d, y = b * c;
	if (x == y)													cout << "0" << endl;
	else if ((y != 0 && x % y == 0) || (x != 0 && y % x == 0))	cout << "1" << endl;
	else														cout << "2" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}