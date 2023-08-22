#include<iostream>

using namespace std;

typedef long long ll;

const int maxn = 1e6 + 10;
int a[maxn];

int main()
{
	int n;
	cin >> n;
	int t1 = 0, t2 = 0;
	int even = 0, odd = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (i % 2) t1 += a[i];
		else t2 += a[i];
	}
	ll num = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2)
		{
			if (t1 - a[i] + odd == even + t2) num++;
			even += a[i];
			t1 -= a[i];
		}
		else {
			if (t1 + odd == even + t2 - a[i]) num++;
			odd += a[i];
			t2 -= a[i];
		}
	}
	cout << num << endl;

	return 0;
}