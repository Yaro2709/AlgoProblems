#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int r, b, d, x, temp;
		cin >> r >> b >> d;
		if (r <= b) {
			x = r;
			temp = b - r;
		}
		else {
			x = b;
			temp = r - b;
		}
		if ((temp * 1.0 / x) <= d) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}