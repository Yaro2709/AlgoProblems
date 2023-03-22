#include <iostream>
#include <string>
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

		int* a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int cnt = 1;
		int cnt1 = 0;

		sort(a, a + n);

		for (int i = 0; i < n - 1; i++) {
			if (a[i] != a[i + 1]) {
				cnt++;
			}
			else if (a[i] == a[i + 1]) {
				cnt1++;
			}
		}

		if (cnt1 % 2 == 0) {
			cout << cnt << endl;
		}
		else {
			cout << cnt - 1 << endl;
		}

		delete[] a;
	}

	return 0;
}