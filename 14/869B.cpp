#include<iostream>

using namespace std;

int t[1000001], z[1000001];

int main() {

	unsigned long long a, b, s = 1;
	cin >> a >> b;
	a++;
	for (a; a <= b; a++) {
		s *= a;
		s %= 10;
		if (a % 10 == 0) {
			cout << 0;
			return 0;
		}
	}
	cout << s % 10;

	return 0;
}