#include <iostream>

using namespace std;

int main()
{
	int n, s, x, c;
	cin >> n;
	for (int i = 1; i <= n; cin >> x, s += x, i++);
	for (int i = 1; i <= 5; i++) c += ((s + i) % (n + 1) != 1);
	cout << c;

	return 0;
}