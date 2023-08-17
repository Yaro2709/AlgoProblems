#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int ans = 0;
	for (int i = 0; i < n / 2; ++i)
	{
		if (arr[i] == 2 && arr[n - i - 1] == 2) {
			ans += 2 * min(a, b);
		}
		else if ((arr[i] == 0 && arr[n - i - 1] == 2) || (arr[i] == 2 && arr[n - i - 1] == 0)) {
			ans += (a);
		}
		else if ((arr[i] == 1 && arr[n - i - 1] == 2) || (arr[i] == 2 && arr[n - i - 1] == 1)) {
			ans += (b);
		}
		else if (arr[i] != arr[n - i - 1]) {
			cout << -1;
			exit(0);
		}

	}
	if (n & 1 && arr[n / 2] == 2) {
		ans += min(a, b);

	}
	cout << ans << endl;

	delete[] arr;

	return 0;
}