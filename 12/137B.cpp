#include <iostream>

using namespace std;

int d[5001];

int main()
{
	int n;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		d[a]++;
	}
	int s = 0;
	for (int i = 1; i <= 5000; i++)
	{
		if (i <= n)
			s += max(d[i] - 1, 0);
		else
			s += d[i];
	}
	cout << s;

	return 0;
}