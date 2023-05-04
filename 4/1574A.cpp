#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int k = 1;
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n - k; i++) {
				cout << "()";
			}
			for (int i = 0; i < k; i++) {
				cout << "(";
			}
			for (int i = 0; i < k; i++) {
				cout << ")";
			}
			cout << endl;

			k++;
		}
	}

	return 0;
}