#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int *arr = new int[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int i = 1, j = 1, ans = 1, maxi = INT_MIN;
	while (j < n) {
		if (arr[j + 1] != arr[j]) {
			j++;
		}
		else {
			ans = j - i + 1;
			maxi = max(ans, maxi);
			j++;
			i = j;
		}
	}
	ans = j - i + 1;
	cout << max(maxi, ans);

	delete[] arr;

	return 0;
}