#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n;
		cin >> n;

		int* b = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		for (int i = 0; i < n / 2; i++) {
			cout << b[i] << " " << b[n - i - 1] << " ";
		}

		if (n % 2 != 0) {
			cout << b[n / 2];
		}

		cout << endl;

		delete[] b;
	}

	return 0;
}