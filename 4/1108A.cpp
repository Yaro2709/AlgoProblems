#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int b, c, d, e;
		cin >> b >> c >> d >> e;
		if (b != e)
			cout << b << " ";
		else
			cout << c << " ";

		cout << e << endl;
	}

	return 0;
}