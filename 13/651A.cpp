#include<iostream>

using namespace std;

int main()
{
	int a, b, tim = 0;
	cin >> a >> b;
	while (a > 0 && b > 0)
	{
		if (a == 1 && b == 1)
			break;
		if (a < b)
		{
			a += 1;
			b -= 2;
		}
		else
		{
			a -= 2;
			b += 1;
		}
		tim++;
	}
	cout << tim << "\n";

	return 0;
}