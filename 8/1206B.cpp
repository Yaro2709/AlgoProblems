#include <iostream>

using namespace std;

int main()
{
	int n, i, x, n0 = 0, np = 0, nn = 0; 
	cin >> n;
	long long int ct = 0;
	for (i = 0; i < n; i++) {
		cin >> x;
		if (!x) n0++;
		else if (x > 0) {
			np++;
			ct += x - 1;
		}
		else {
			nn++;
			ct += -1 - x;
		}
	}
	if (nn % 2 == 0 || n0 > 0) cout << ct + n0;
	else cout << ct + 2;

	return 0;
}