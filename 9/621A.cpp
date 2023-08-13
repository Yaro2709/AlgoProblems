#include <iostream>

using namespace std;

int main() {
	int n, min, x, i;
	long long int sum;
	cin >> n;

	min = 0;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		sum += x;
		if (x % 2 == 1) {
			if ((min == 0) || (min > x)) {
				min = x;
			}
		}
	}
	if (sum % 2 == 0) {
		cout << sum;
	}
	else {
		cout << sum - min;
	}

	return 0;
}