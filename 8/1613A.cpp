#include <iostream>

using namespace std;

int main()
{
	long long int t;  
	cin >> t;
	while (t--)
	{
		long long int x1, x2, p1, p2;
		cin >> x1 >> p1 >> x2 >> p2;

		long long int p = min(p1, p2);

		p1 -= p;
		p2 -= p;

		if (p1 >= 7)
		{
			cout << ">\n";
			continue;
		}

		if (p2 >= 7)
		{
			cout << "<\n";
			continue;
		}

		x1 *= pow(10, p1);
		x2 *= pow(10, p2);

		if (x1 > x2)
			cout << ">\n";

		else if (x1 < x2)
			cout << "<\n";

		else
			cout << "=\n";
	}

	return 0;
}