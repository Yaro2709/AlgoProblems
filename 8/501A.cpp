#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, v, m;
	cin >> a >> b >> c >> d;
	v = max((3 * b) / 10, b - b / 250 * d);
	m = max((3 * a) / 10, a - a / 250 * c);
	if (v > m)
		cout << "Vasya";
	else if (m > v)
		cout << "Misha";
	else
		cout << "Tie";

	return 0;
}