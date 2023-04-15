#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a1, a2, a3, b1, b2, b3, n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

	int sum1 = ceil((a1 + a2 + a3) / 5.0);
	int sum2 = ceil((b1 + b2 + b3) / 10.0);

	if (sum1 + sum2 <= n) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}