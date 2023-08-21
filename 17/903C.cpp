#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int i, a[50000], y = 0, j = 0, x = 0, n;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (i = 0; i < n; i++) {
		if (a[i] == a[i + 1])
			x++;
		else {
			if (x > y)
				y = x;
			x = 0;
		}
	}
	cout << y + 1;
	return 0;
}