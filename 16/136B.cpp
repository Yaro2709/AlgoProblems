#include<iostream>
#include<math.h>

using namespace std;

int num[105], num1[105], ans[105];

int main()
{
	int a, b, c, i;
	cin >> a >> c;
	while (a != 0)
	{
		num[i] = a % 3;
		i++;
		a /= 3;
	}
	int maxi = 0, res;
	maxi = max(i, maxi);
	i = 0;
	while (c != 0)
	{
		num1[i] = c % 3;
		i++;
		c /= 3;
	}
	maxi = max(i, maxi);
	for (i = 0; i < 105; i++)
	{
		if (num1[i] - num[i] < 0)
		{
			ans[i] = 3 + num1[i] - num[i];
		}
		else
		{
			ans[i] = num1[i] - num[i];
		}
	}
	for (int i = 0; i < 105; i++)
	{
		res += ans[i] * pow(3, i);
	}
	cout << res;
	return 0;
}