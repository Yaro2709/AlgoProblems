#include<iostream>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int x = 0, y = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == 'x')
		{
			x++;
		}
		else
		{
			y++;
		}
	}
	if (x > y)
	{
		for (int i = 0; i < x - y; i++)
		{
			cout << "x";
		}
		return 0;
	}
	else
	{
		for (int i = 0; i < y - x; i++)
		{
			cout << "y";
		}
		return 0;
	}

	return 0;
}