#include<iostream>

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	int s = 0;
	int* a = new int[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i]) { 
			s++; 
		}
	}

	int t, x;
	while (q--) {
		cin >> t >> x;
		if (t == 1) {
			if (a[x]) {
				s--;
			}
			else {
				s++;
			}
			a[x] ^= 1;
		}
		else {
			if (x <= s) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
	}

	delete[] a;

	return 0;
}