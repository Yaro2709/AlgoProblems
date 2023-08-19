#include<iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int m = n;
	int a[1000];
	int t = 0;
	for (int i = 2; i < n;)
	{
		if (n % i == 0)
		{
			t++;
			a[t] = i;
			n = n / i;
		}
		else i++;
	}
	t++;
	a[t] = n;
	if (t < k)
	{
		cout << -1;
		return 0;
	}
	else
	{
		int tich = 1;
		for (int i = 1; i < k; i++)
		{
			cout << a[i] << " ";
			tich *= a[i];
		}
		cout << m / tich;
	}

	return 0;
}