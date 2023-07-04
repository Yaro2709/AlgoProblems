#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	int x, y, z;
	cin >> x >> y >> z;
	cin >> a >> b >> c;

	if ((x + y + z) > (a + b + c)) {
		cout << "NO";
	}
	else if (x > a) {
		cout << "NO";
	}
	else if (y > (a - x + b)) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}

	return 0;
}