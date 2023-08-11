#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, s, a[1005];
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	int test = 0;
	for (int i = 0; i < n - 1; i++) {
		test += a[i];
	}
	if (test > s)	cout << "NO" << endl;
	else			cout << "YES" << endl;

	return 0;
}