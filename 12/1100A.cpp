#include <iostream>

using namespace std;

int num[105];

int main() {
	int n, k;
	cin >> n >> k;
	long long maxs = 0;
	for (int i = 0; i < n; ++i)
		cin >> num[i];
	for (int j = 0; j < k; ++j) {
		long long sum1 = 0;
		long long sum2 = 0;
		for (int i = 0; i < n; ++i) {
			if (i % k == j) sum1 = sum1 + num[i];
			else sum2 = sum2 + num[i];
		}
		maxs = max(maxs, abs(sum2));
	}
	cout << maxs << endl;

	return 0;
}