#include <iostream>

using namespace std;

int main() 
{
	int n, c;
	cin >> n >> c;

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int q = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] - a[i - 1] > c) {
			q = i + 1;
		}
	}

	cout << n - q + 1 << endl;

	delete[] a;

	return 0;
}