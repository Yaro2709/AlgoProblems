#include <iostream>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if (n == 0)
		cout << "0";
	else
	{
		if (n % 2 == 1)
			cout << ((n + 1) / 2);
		else
			cout << (n + 1);
	}

	return 0;
}