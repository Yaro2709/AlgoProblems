#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, x, y;
	cin >> n;
	int *ar = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	sort(ar, ar + n);
	x = ar[n - 1];
	for (int i = n - 1; i >= ar[0]; i--)
	{
		if (ar[n - 1] % ar[i] != 0 || ar[i] == ar[i - 1])
		{
			y = ar[i];
			cout << x << " " << y;
			return 0;
		}
	}

	delete[] ar;

	return 0;
}