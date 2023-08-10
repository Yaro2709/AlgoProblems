#include<stdio.h>
#include<iostream>

using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[105] = { 0 };
		for (int i = 1; i <= n; i++) cin >> a[i];
		int u = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i != j && gcd(a[i], a[j]) <= 2)
				{
					u = 1;
					break;
				}
			}
			if (u) break;
		}
		if (u) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}