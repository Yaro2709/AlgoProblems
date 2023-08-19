#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int s = INT_MAX;
	int v;
	for (int t = 1; t <= 100; t++) {

		int res = 0;
		for (int i = 0; i < n; i++) {
			if (abs(t - arr[i]) <= 1) {
				continue;
			}
			if (t > arr[i]) {
				res = res + t - 1 - arr[i];
			}
			else {
				res = res + arr[i] - t - 1;
			}

		}
		if (s > res) {
			s = res;
			v = t;
		}

		
	}
	cout << v << " ";
	cout << s;

	delete[] arr;

	return 0;
}