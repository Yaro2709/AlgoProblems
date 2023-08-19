#include<iostream>

using namespace std;

int main()
{
	int n, i, j = 0, k;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> k;
		if (k % 2 == 1)
		{
			j++;
			break;
		}
	}
	if (j == 0)
	{
		cout << "Second";
	}
	else
	{
		cout << "First";
	}
	return 0;
}