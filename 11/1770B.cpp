#include <iostream>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a = 1; int b = n;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 1) {
				cout << a << " ";
				a++;
			}
			else {
				cout << b << " ";
				b--;
			}
		}
		cout << "\n";
	}
	return 0;
}