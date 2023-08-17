#include <iostream>

using namespace std;

bool check(int h, int m)
{
	int h1 = h % 10;
	int h2 = h / 10;
	int m1 = m % 10;
	int m2 = m / 10;
	return ((h1 == m2) && (h2 == m1));
}

int main()
{
	int hour, min, target = 0;
	char h;
	cin >> hour >> h >> min;
	while (!check(hour, min))
	{
		target++;
		min++;
		if (min == 60)
		{
			min = 0;
			hour = (hour + 1) % 24;
		}
	}
	cout << target;

	return 0;
}