#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	int ans = ceil((double)y / 100 * n);
	if (ans - x > 0)
		cout << ans - x << endl;
	else
		cout << 0 << endl;

	return 0;
}