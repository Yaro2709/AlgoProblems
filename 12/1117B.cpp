#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long long int n, m, k;
	cin >> n >> m >> k;

	vector<long long int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());

	cout << m / (k + 1) * (a[0] * k + a[1]) + m % (k + 1) * a[0] << endl;

	return 0;
}