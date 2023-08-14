#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = 0;
	int y = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'o') x++;
		else y++;
	}
	if (x == 0 || y % x == 0)   cout << "YES" << endl;
	else						cout << "NO" << endl;

	return 0;
}