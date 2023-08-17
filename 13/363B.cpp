#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int *a = new int[n];
	int p, nxt;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	p = 0;
	for (int i = 0; i < k; i++) {
		p += a[i];
	}

	int min = p;
	int minp = 0;
	for (int i = 1; i <= n - k; i++) {
		nxt = p - a[i - 1] + a[i + k - 1];
		if (nxt < min) {
			min = nxt;
			minp = i;
		}
		p = nxt;
	}

	cout << minp + 1 << endl;

	delete[] a;

	return 0;
}