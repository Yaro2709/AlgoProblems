#include <iostream>

using namespace std;

int main()
{
	long long int n, a, b, s, c;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		c = abs(a - b);
		s = c / 5;
		c = c % 5;
		s = s + c / 2;
		s = s + c % 2;
		cout << s << endl;
	}

	return 0;
}