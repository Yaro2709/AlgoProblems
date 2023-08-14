#include <iostream>

using namespace std;

int main() {
	int n, t; 
	cin >> n >> t;
	int* c = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	int p = 0;
	for (int i = 1; i < n; i++) {
		if (c[i] <= c[i - 1]) {
			p += (c[i - 1] - c[i]) / t + 1;
			c[i] += ((c[i - 1] - c[i]) / t + 1) * t;
		}
	}
	cout << p;

	delete[]c;

	return 0;
}