#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int *p = new int[n];
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		if (p[i] & 1)odd++;
		else even++;
	}
	if (!(even == 0 || odd == 0)) {
		sort(p, p + n);
	}
	for (int i = 0; i < n; i++)cout << p[i] << " ";
	cout << "\n";

	delete[] p;

	return 0;
}