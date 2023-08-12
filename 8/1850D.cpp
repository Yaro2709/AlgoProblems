#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		int ans = 1, cnt = 1;
		for (int i = 1; i < n; i++) {
			if (arr[i] - arr[i - 1] <= k)
				cnt++;
			else
				cnt = 1;
			ans = max(ans, cnt);
		}
		cout << (n - ans) << endl;

		delete[] arr;
	}
	return 0;
}