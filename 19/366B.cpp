#include<iostream>

using namespace std;

typedef long long LL;
LL a[100005] = { 0 };
LL sum[100005] = { 0 };
LL minsum = LLONG_MAX;

int main() {
	LL n, k, i, mini = 0, l = 0;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		sum[i] = a[i];
	}

	for (i = k; i < n; i++) {
		sum[i] = a[i] + sum[i - k];
	}

	for (i = n - k, l = 0; i < n; i++, l++) {
		if (sum[i] < minsum) {
			minsum = sum[i];
			mini = l;
		}

	}
	cout << mini + 1 << endl;
	return 0;
}