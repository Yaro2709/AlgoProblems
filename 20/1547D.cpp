#include<iostream>

using namespace std;

#define N 200005

int a[N];

void sol() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << 0;
	for (int i = 1; i < n; i++) {
		int t = a[i - 1] | a[i];
		cout << " " << (t ^ a[i]);
		a[i] = a[i - 1] | a[i];
	}
	cout << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}

	return 0;
}