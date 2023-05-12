#include <iostream>
#include <algorithm>

using namespace std;

void solve();

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}

void solve() 
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cout << arr[n - 1] + arr[n - 2] - arr[0] - arr[1] << endl;

	delete[] arr;
}