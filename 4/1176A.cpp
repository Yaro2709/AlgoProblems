#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;

		long long int count = 0, flag = 0;
		while (n != 1) {
			if (n % 2 == 0)
				n = n / 2;
			else if (n % 3 == 0)
				n = (2 * n) / 3;
			else if (n % 5 == 0)
				n = (4 * n) / 5;
			else {
				flag = 1;
				break;
			}

			count++;
		}

		if (flag == 1)
			cout << -1 << endl;
		else
			cout << count << endl;

	}

	return 0;
}