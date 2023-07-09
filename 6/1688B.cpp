#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int count_n = 0;
		int min_need = INT_MAX;
		for (int i = 0; i < n; i++) {
			int v;
			cin >> v;

			if (v % 2 == 1) {
				count_n++;
			}
			else {
				int need = 0;
				while (v % 2 == 0 && need < min_need) {
					need++;
					v >>= 1;
				}
				if (need < min_need) {
					min_need = need;
				}
			}
		}

		if (count_n) {
			cout << n - count_n << endl;
		}
		else {
			cout << min_need + n - 1 << endl;
		}
	}

	return 0;
}