#include <iostream>

using namespace std;

int main()
{
	string a;
	cin >> a;
	string s[10];
	for (int i = 0; i < 10; i++) cin >> s[i];
	for (int i = 0; i < 8; i++)
	{
		string tmp = a.substr(i * 10, 10);
		for (int i = 0; i < 10; i++)
		{
			if (tmp == s[i])
			{
				cout << i;
				break;
			}
		}
	}

	return 0;
}