#include<iostream>

using namespace std;

int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[k] + a[j] == a[i])
				{
					cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
					return 0;
				}
			}
		}
	}
	cout << -1;

	return 0;
}