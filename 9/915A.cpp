#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	int cont = b;
	for (int d = 0; d < a; d++)
	{
		cin >> c;
		if (b % c == 0 && b / c < cont)
		{
			cont = b / c;
		}
	}
	cout << cont;
	return 0;
}