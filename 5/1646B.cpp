#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;

		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int s = -arr[0];
		int pr = n - 1, pb = 1;
		while (pb < pr and s <= 0) {
			s += arr[pr--];
			s -= arr[pb++];
		}

		if (s > 0)	cout << "Yes" << endl;
		else		cout << "No" << endl;

		delete[] arr;
	}

	return 0;
}