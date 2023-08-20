#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int e = n;
	while (e != 1) {
		int mx = max_element(a, a + e) - a;
		while (mx != e - 1 && a[mx] == a[mx + 1])mx++;
		if (mx == e - 1) {
			e--;
		}
		else {

			cout << mx + 1 << " " << mx + 2 << endl;
			swap(a[mx], a[mx + 1]);
		}
	}

	delete[] a;

	return 0;
}