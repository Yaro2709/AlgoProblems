#include<iostream>

using namespace std;

int main() {
	int n, v, sum;
	cin >> n >> v;
	if (n - 1 <= v) {
		cout << n - 1;
		return 0;
	}
	sum = v - 1;
	n -= v;
	sum += (n * (n + 1) / 2);
	cout << sum;
	return 0;
}