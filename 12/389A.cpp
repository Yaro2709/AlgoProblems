#include <iostream>

using namespace std;

int s, a[101];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while (s < n) {
		for (int i = 0; i < n; i++) {
			if (a[s] > a[i]) {
				a[s] -= a[i];
				i--;
			}
			else
				if (a[s] < a[i]) {
					a[i] -= a[s];
					i--;
				}
		}
		s++;
	}
	cout << n * a[1];

	return 0;
}