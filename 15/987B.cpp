#include<iostream>
#include<math.h>

using namespace std;

int main() {
	long double x, y, a, b;
	cin >> x >> y;
	a = log2(y);
	b = log2(x);
	if (y * b > x * a) cout << ">" << endl;
	else if (y * b < x * a) cout << "<" << endl;
	else cout << "=" << endl;

	return 0;
}