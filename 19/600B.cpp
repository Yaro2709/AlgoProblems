#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long long n, m, a[200200], b[200200];
	cin >> n >> m;
	for (int i = 0; i < n; i++)cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		int ans = upper_bound(a, a + n, b[i]) - a;
		cout << ans << " ";

	}
	return 0;
}