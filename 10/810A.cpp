#include <iostream>

using namespace std;

int main()
{
	long long int n, k, i, s = 0, a = 0, m[100];
	long double f, g;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> m[i];
		s += m[i];
	}
	f = k - 0.5;
	g = (double)s / n;
	while (g < f) {
		s += k;
		a++;
		n++;
		g = (double)(s) / n;
	}
	cout << a << endl;

	return 0;
}