#include<iostream>

using namespace std;

int a[1000];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int s = 1;
		for (int j = i - 1; j > -1; j--)
		{
			if (a[j] <= a[j + 1]) s++;
			else break;
		}
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] <= a[j - 1]) s++;
			else break;
		}
		ans = max(s, ans);
	}
	cout << ans;

	return 0;
}