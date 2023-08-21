#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, l, r, ans;
	cin >> n;
	int *arr = new int[n];
	for (l = 0; l < n; l++) cin >> arr[l];
	sort(arr, arr + n);
	for (l = 0; l < n; l++) {
		while (r < n && arr[r] - arr[l] <= 5) {
			r++;
			ans = max(ans, r - l);
		}
	}
	cout << ans;

	delete[] arr;

	return 0;
}