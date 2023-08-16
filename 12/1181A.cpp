#include <iostream>

using namespace std;

int main() {
	long long x, y, z;
	cin >> x >> y >> z;
	cout << (x + y) / z << ' ';
	if (x / z + y / z == (x + y) / z)cout << 0;
	else {
		cout << min(min(x % z, z - x % z), min(y % z, z - y % z));
	}

	return 0;
}