#include<iostream>

using namespace std;

int main() {
	long long int n, i;
	cin >> n;
	long long int *a = new long long int[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	long long int max = 1, ans = 1;
	for (i = 1; i < n; i++) {
		if (a[i] <= a[i - 1] * 2) {
			ans++;
		}
		else {
			ans = 1;
		}
		if (ans > max) {
			max = ans;
		}
	}

	cout << max << endl;

	delete[] a;

	return 0;
}