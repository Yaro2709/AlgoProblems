#include<iostream>

using namespace std;

int main()
{
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	if (a[0] == a[3])
	{
		if (a[0] == 0 && a[2] > 0)
		{
			cout << "0";
			return 0;
		}
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	return 0;
}