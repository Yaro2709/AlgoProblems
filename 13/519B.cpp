#include<iostream>

using namespace std;

int main()
{
	int n, i, j, value, a[3] = { 0 };
	cin >> n;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			cin >> value;
			a[i] += value;
		}
	}
	cout << a[0] - a[1] << endl << a[1] - a[2];

	return 0;
}