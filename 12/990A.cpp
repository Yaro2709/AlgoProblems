#include <iostream>

using namespace std;

int main() {
	long long int a, b, n, m;
	cin >> n >> m >> a >> b;
	cout << min(((n + m - 1) / m * m - n) * a, (n - n / m * m) * b) << endl;
	return 0;
}