#include <iostream>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int i = 0, j = 0;
	while (a[i] == '0')
	{
		i++;
	}
	while (b[j] == '0')
	{
		j++;
	}
	string x = "", y = "";
	for (i = i; i <= a.size() - 1; i++)
	{
		x += a[i];
	}
	for (j = j; j <= b.size() - 1; j++)
	{
		y += b[j];
	}

	if (x.size() > y.size())
	{
		cout << ">";
	}
	else if (x.size() == y.size() && x > y)
	{
		cout << ">";
	}
	else if (x == y)
	{
		cout << "=";
	}
	else
	{
		cout << "<";
	}

	return 0;
}