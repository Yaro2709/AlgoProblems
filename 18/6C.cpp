#include<iostream>

using namespace std;

int main()
{
	int n, a[100010];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int i = 1, j = n, cnt = 1;
	while (i + cnt < n)
	{
		a[i]--;
		a[j]--;
		if (a[i] == 0 && a[i + 1] != 0)
			i++;
		if (a[j] == 0 && a[j - 1] != 0)
		{
			j--;
			cnt++;
		}

	}
	cout << i << ' ' << n - i;

	return 0;
}