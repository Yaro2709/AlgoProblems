#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<double> v(n);
	for (auto& x : v)
		cin >> x;
	int c = 0;
	for (int i = 0; i < n; i++) {
		c += ceil(v[i] / (k));
	}
	if (c % 2 == 0)
		cout << c / 2 << endl;
	else
		cout << c / 2 + 1 << endl;

	return 0;
}