#include<iostream>

using namespace std;

int main() {
	int long long n, a, b, c, i = 0;
	cin >> a >> b >> c;
	if (a == b && b == c) { cout << 0; return 0; }
	if (a >= b && a >= c) { cout << max(a - c - 1, i) + max(a - b - 1, i); return 0; }
	if (b >= c && b >= a) { cout << max(b - a - 1, i) + max(b - c - 1, i); return 0; }
	if (c >= a && c >= b) { cout << max(c - b - 1, i) + max(c - a - 1, i); return 0; }

	return 0;
}