#include<iostream>

using namespace std;

int main()
{
	int n, ans, count = 0, size, i;
	cin >> n;
	size = (n / 2) + 1;
	cout << size << endl;
	for (i = 0; i < n; i++)
	{
		if (i < size)
		{
			cout << 1 << " " << i + 1 << endl;
		}
		else
		{
			cout << (i - size + 2) << " " << size << endl;
		}
	}

	return 0;
}