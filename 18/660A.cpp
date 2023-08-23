#include<iostream>
#include<vector>

using namespace std;

long long n, a[200001], r = 0;
vector <long long> b;

long long gcd(int x, int y) {
	int z;
	while (y > 0) {
		z = y;
		y = x % y;
		x = z;
	}
	return x;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	b.push_back(a[0]);
	for (int i = 1; i < n; i++) {
		if (gcd(a[i], a[i - 1]) > 1) {
			b.push_back(1);
		}
		b.push_back(a[i]);
	}
	cout << b.size() - n << endl;
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
	return 0;
}