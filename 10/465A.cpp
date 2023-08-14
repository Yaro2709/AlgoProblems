#include <iostream>

using namespace std;

int main()
{
	string s1;
	int n, x = 0;
	cin >> n;
	cin >> s1;
	for (int i = 0; s1[i]; i++)
	{
		if (s1[0] == '0')
		{
			cout << x + 1;
			return 0;
		}
		else if (s1[i] == '1')x++;
		else break;
	}
	if (x == s1.length())	cout << x;
	else					cout << x + 1;

	return 0;
}