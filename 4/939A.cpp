#include <iostream>

using namespace std;

int a[5001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		if (a[i] != i) {
			if (a[a[i]] != i) {
				if (a[a[a[i]]] == i) {
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";

	return 0;
}