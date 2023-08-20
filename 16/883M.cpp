#include<iostream>

using namespace std;

int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x2 > x1)x2++;
	if (x2 < x1)x2--;
	if (y2 > y1)y2++;
	if (y2 < y1)y2--;
	int x = 2 * (abs(x2 - x1) + abs(y2 - y1));
	if (x2 == x1)x = 4 + 2 * abs(y2 - y1);
	if (y2 == y1)x = 4 + 2 * abs(x2 - x1);
	cout << x;

	return 0;
}