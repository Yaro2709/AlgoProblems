#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long long int n, m, i, j, c = 0, b = 1, k, l, p;
	cin >> n >> m;
	long long int *arr = new long long int[m];
	for (i = 0; i < m; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + m);
	if (arr[0] == 1 || arr[m - 1] == n)
	{
		cout << "NO";
		return 0;
	}
	c = 1;
	for (i = 0; i < m - 1; i++)
	{
		if (arr[i + 1] - arr[i] == 1)
		{
			c++;
			if (c == 3)
			{
				cout << "NO";
				return 0;
			}
		}
		else
			c = 1;

	}
	cout << "YES";

	return 0;
}