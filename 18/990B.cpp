#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

const int N = 220000;
int arr[N];
map<int, int>b;

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		b[arr[i]]++;
	}
	sort(arr, arr + n);
	int len = unique(arr, arr + n) - arr;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= arr[i + 1] - k && arr[i] < arr[i + 1])
			n -= b[arr[i]];
	}
	cout << n;

	return 0;
}