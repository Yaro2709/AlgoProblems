#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		int f;
		if (a % c == 0) {
			f = a / c;
		}
		else {
			f = a / c + 1;
		}

		int g;
		if (b % d == 0) {
			g = b / d;
		}
		else {
			g = b / d + 1;
		}

		if (f + g > e) {
			cout << "-1" << endl;
		}
		else {
			cout << f << " " << g << endl;
		}
	}

	return 0;
}