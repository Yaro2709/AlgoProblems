#include<iostream>

using namespace std;

int main() {
	long long int x;
	long long int l, r;
	x = 10000000;
	for (int i = 0; i < 4; i++)
	{
		long long int y;
		cin >> y;
		x = min(x, y);
	}
	cin >> l >> r;
	r = min(x - 1, r);
	int k = r - l + 1;
	cout << max(k, 0);

	return 0;
}