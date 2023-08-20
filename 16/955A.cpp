#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int hh, mm, h, d, c, n, ans;
	cin >> hh >> mm >> h >> d >> c >> n;
	if (hh >= 20) {
		ans = h / n;
		if (h % n) ans++;
		ans *= c;
		cout << fixed << setprecision(4) << ans * 0.8 << endl;
	}
	else {
		int diff = 20 * 60 - hh * 60 - mm;
		int a, b;
		a = h / n;
		if (h % n) a++;
		b = (h + diff * d) / n;
		if ((h + diff * d) % n) b++;
		double x = min(b * c * 0.8, a * c * 1.0);
		cout << fixed << setprecision(4) << x << endl;
	}

	return 0;
}