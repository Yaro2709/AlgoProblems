#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int z = 0;
	for (int i = n; i > 0; i--)
	{
		sum = sum + i + (i - 1) * z;
		z++;
	}
	cout << sum;
	
	return 0;
}