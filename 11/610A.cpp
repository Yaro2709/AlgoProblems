#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n & 1)
		cout << 0;
	else
		cout << (n - 1) / 4;

	return 0;
}