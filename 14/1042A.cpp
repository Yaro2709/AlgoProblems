#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m, G;
	cin >> n >> m; G = m;
	int *a = new int[n];
	int *an = new int[n];
	for (int i = 0; i < n; i++) { cin >> a[i]; an[i] = a[i]; }
	sort(a, a + n);
	sort(an, an + n); for (int i = 0; i < n; i++) {
		while (an[i] < an[n - 1] && G>0) { an[i]++; G--; }
	}
	cout << an[n - 1] + (G / n) + (!(G % n) == 0) << " " << a[n - 1] + (m);

	delete[] a;
	delete[] an;

	return 0;
}