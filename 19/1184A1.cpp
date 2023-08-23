#include<iostream>

using namespace std;

int main()
{
	long long int i, j, k, n, x, y;
	cin >> n;
	n = n - 1;
	i = 1;
	k = 0;
	while (i * i + i < n)
	{
		j = n - (i * i) - i;
		if (j % (2 * i) == 0)
		{
			x = i;
			y = j / (2 * i);
			k = 1;
			break;
		}
		i++;
	}
	if (k)
		cout << x << " " << y;
	else
		cout << "NO";
	return 0;
}