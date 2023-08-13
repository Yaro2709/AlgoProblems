#include<iostream>
#include<algorithm>

using namespace std;

int a[110];

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int s = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			s += a[i];
		}
		if (s == 0) {
			cout << "NO" << endl;
			continue;
		}
		sort(a + 1, a + n + 1);
		if (s > 0) {
			reverse(a + 1, a + n + 1);
		}
		cout << "YES" << endl;
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}