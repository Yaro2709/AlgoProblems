#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int a[300005];

void solve() {
	int n;
	cin >> n;
	long long int ns = 0;
	for (int i = 1; i <= n; i++)cin >> a[i];
	while (n > 1) {
		int cnt = 0;
		for (int i = 1; i <= n; i += 2) {
			if (abs(a[i] - a[i + 1]) != 1) {
				cout << "-1\n"; return;
			}
			if (a[i + 1] < a[i])ns++;
			a[++cnt] = max(a[i], a[i + 1]) / 2;
		}
		n /= 2;
	}
	cout << ns << '\n';
}
int main()
{
	int tt;
	cin >> tt;
	while (tt--)
		solve();

	return 0;
}