#include <iostream>

using namespace std;

int work(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += (n % 10);
		n = n / 10;
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	while (work(n) % 4 != 0)
	{
		n++;
	}
	cout << n << endl;

	return 0;
}