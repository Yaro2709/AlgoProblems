#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

const int maxn = 1e6 + 10;
ll a[maxn];

int main()
{
	ll n, m, sum = 0, cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		ll x, y;
		cin >> x >> y;
		a[i] = x - y;
		sum += x;
	}
	sort(a, a + n);
	for (int i = n - 1; i >= 0; i--)
	{
		if (sum <= m)
			break;
		else
			sum -= a[i], cnt++;
	}
	if (sum <= m)
		cout << cnt << endl;
	else
		cout << -1 << endl;

	return 0;
}