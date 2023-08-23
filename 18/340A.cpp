#include<iostream>

using namespace std;

long long XIEX(long long x, long long y) {
	while (x > 0 && y > 0) {
		if (x > y) x %= y;
		else y %= x;
	}
	return x + y;
}

int main() {
	long long x, y, a, b, s, i;
	cin >> x >> y >> a >> b;
	s = x * y / XIEX(x, y);
	cout << b / s - (a - 1) / s;
	return 0;
}