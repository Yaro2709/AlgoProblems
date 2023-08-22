#include<iostream>

using namespace std;

int main()
{
	int a1, a2, d1, d2;
	cin >> d1 >> a1 >> d2 >> a2;
	for (int i = 0; i < 1e8; ++i)
	{
		if (a1 == a2)
		{
			cout << a1 << endl;
			return 0;
		}
		if (a1 < a2)
			a1 += d1;
		else
			a2 += d2;
	}
	cout << "-1" << endl;

	return 0;
}