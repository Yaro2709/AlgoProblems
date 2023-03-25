#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int a[3] = { 0.0 };
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}

		int count = 0;
		for (int j = 0; j < 3; j++) {
			for (int i = 0; i < 3; i++) {
				if (n == (i + 1)) {
					n = a[i];
					count += 1;
				}
			}
		}

		if (count == 3) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}