#include<iostream>

using namespace std;

int main() {
	int t;
	long long n, d, len;
	cin >> t;
	while (t--) {
		len = 0;
		cin >> n >> d;
		++d;
		while (d / 10) {
			len++;
			d /= 10;
		}
		cout << len * n << endl;
	}

	return 0;
}