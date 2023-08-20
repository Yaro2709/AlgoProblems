#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long n;
	cin >> n;
	long long *a = new long long[n];
	long long ans = 0;
	for (long long i = 0; i < n; i++)
	{
		cin >> a[i];
		ans = ans + a[i];
	}
	sort(a, a + n);
	reverse(a, a + n);
	for (long long i = 0; i < n; i++)
	{
		for (long j = i + 1; j < n; j++)
			if (a[i] == a[j] && a[j] > 0)
			{
				ans = ans - 1;
				a[j] -= 1;
			}
	}
	cout << ans << endl;

	return 0;
}