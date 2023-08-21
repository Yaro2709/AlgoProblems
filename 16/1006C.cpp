#include<iostream>

using namespace std;

const int maxn = 10e5 * 2 + 5;
int a[maxn];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int i = 0, j = n - 1;
	long long sumi = 0, sumj = 0;
	long long ans = 0;
	while (i <= j) {
		if (sumi <= sumj) {
			sumi += a[i++];
		}
		else {
			sumj += a[j--];
		}
		if (sumi == sumj) {
			ans = sumi;
		}
	}
	cout << ans << endl;

	return 0;
}