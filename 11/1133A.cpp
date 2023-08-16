#include <iostream>

using namespace std;

int main()
{
	char c;
	int h1, m1, h2, m2, m3, h3;
	cin >> h1 >> c >> m1;
	cin >> h2 >> c >> m2;
	m1 += h1 * 60;
	m2 += h2 * 60;
	m3 = m1 + (m2 - m1) / 2;
	h3 = m3 / 60;
	m3 = m3 % 60;

	cout << h3 / 10 << h3 % 10 << ":" << m3 / 10 << m3 % 10;

	return 0;
}