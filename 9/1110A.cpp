#include <iostream>

using namespace std;

int main()
{
	int b, k, a = 0, last;
	cin >> b >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> last;
		a += last;
		a %= 2;
	}
	if (b % 2 == 0)
		cout << (last % 2 == 0 ? "even" : "odd");
	else
		cout << (a % 2 == 0 ? "even" : "odd");
	return 0;
}