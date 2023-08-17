#include<iostream>
#include<algorithm>

using namespace std;

long long int arr[200005];

int main() {
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		long long int ans = 0, saleb = 0;
		for (int i = 0; i < n; i++)cin >> arr[i], saleb += arr[i] < 0, arr[i] = abs(arr[i]), ans += abs(arr[i]);
		sort(arr, arr + n);
		cout << ans - (saleb % 2) * 2 * arr[0] << endl;
	}

	return 0;
}