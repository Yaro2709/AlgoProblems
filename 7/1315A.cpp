#include<iostream>

using namespace std;

int main()
{
	int a, b, x, y;
	int T;
	cin >> T;
	while (T--) {
		cin >> a >> b >> x >> y;
		x++;
		y++;
		cout << max((x - 1) * b, max(a * (y - 1), max((a - x) * b, a * (b - y)))) << endl;
	}
	return 0;
}