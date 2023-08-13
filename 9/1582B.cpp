#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		long long a = 1, b = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;

			if (x == 1) {
				b++;
			}
			else if (!x) {
				a *= 2;
			}
		}

		cout << a * b << endl;
	}

	return 0;
}