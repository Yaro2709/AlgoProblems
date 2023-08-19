#include<iostream>
#include<algorithm>

using namespace std;

int a[100005];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	if (a[n - 1] >= a[n - 2] + a[n - 3])
		cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		int temp;
		temp = a[n - 1];
		a[n - 1] = a[n - 2];
		a[n - 2] = temp;
		for (int i = 0; i < n; i++) {
			cout << a[i] << ' ';
		}
	}

	return 0;
}