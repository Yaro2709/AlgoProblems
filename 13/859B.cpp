#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	a = ceil(sqrt(n));
	b = sqrt(n) + 0.5;
	cout << 2 * (a + b);

	return 0;
}