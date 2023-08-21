#include<iostream>

using namespace std;

int main() {

	long long int q;
	cin >> q;
	while (q--) {
		long long int n, m;
		cin >> n >> m;
		long long int count = 0;
		long long int ten[11] = { 0 };
		for (int i = 1; i <= 10; i++) {
			ten[i] = ten[i - 1] + (m * i) % 10;
		}
		long long int quotient = n / m;
		count += (quotient / 10) * ten[10];
		count += ten[quotient % 10];
		cout << count << endl;
	}

	return 0;
}