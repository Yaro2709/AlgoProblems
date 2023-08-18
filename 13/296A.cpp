#include<iostream>

using namespace std;

int a[10000];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int ins;
		cin >> ins;
		a[ins]++;
	}

	for (int i = 1; i <= 1000; i++)
		if (a[i] > (n + 1) / 2) {
			cout << "NO" << endl;
			return 0;
		}

	cout << "YES" << endl;

	return 0;
}