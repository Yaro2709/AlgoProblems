#include<iostream>

using namespace std;

int main() {
	long long int a, b, c, n, m;
	cin >> a >> b >> c;
	n = max(a, b), m = min(a, b);

	if (n > m + 1 && n != m) n = m + 1;
	if (n == m) n = m;

	cout << n + m + (2 * c);

	return 0;
}