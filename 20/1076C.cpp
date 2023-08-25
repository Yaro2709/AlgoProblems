#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	int n;
	double d, Dx, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d;

		if (d == 0) cout << fixed << setprecision(9) << "Y " << 0.0 << " " << 0.0 << endl;
		else if (d >= 4) {
			Dx = sqrt(d * d - 4 * d);
			a = (d + Dx) / 2;
			b = (d - Dx) / 2;
			cout << fixed << setprecision(9) << "Y " << a << " " << b << endl;
		}
		else cout << "N" << endl;
	}
	return 0;
}
