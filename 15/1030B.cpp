#include<iostream>

using namespace std;

int main()
{
	int n, d, m;
	cin >> n;
	cin >> d;
	cin >> m;
	int x;
	while (cin >> x) {
		int y;
		cin >> y;
		if (y >= x - d &&
			y <= x + d &&
			y >= -x + d &&
			y <= -x + 2 * n - d) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}