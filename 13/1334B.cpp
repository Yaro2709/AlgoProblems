#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	double w;
	long long t, n, s; cin >> t;
	while (t--) {
		cin >> n >> w;
		int *arr = new int[n];
		int r = 0; s = 0;
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		for (int i = n - 1; i >= 0; i--) {
			s += arr[i];
			if (s >= w * (n - i)) r++;
		}
		cout << r << "\n";

		delete[] arr;
	}

	return 0;
}