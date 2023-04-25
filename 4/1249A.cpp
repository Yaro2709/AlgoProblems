#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int a[200] = { 0 };
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}

		sort(a + 1, a + 1 + n);

		int flag = 1;
		for (int i = 2; i <= n; i++) {
			if (a[i] - a[i - 1] == 1) {
				flag = 0;
				break;
			}
		}

		if (flag) {
			cout << 1 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}

	return 0;
}