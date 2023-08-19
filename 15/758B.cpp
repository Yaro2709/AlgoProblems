#include<iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int r = 0, b = 0, g = 0, y = 0;
	char a[4];
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '!')
		{
			a[i % 4] = s[i];
		}
	}
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '!')
		{
			char ch = a[i % 4];
			switch (ch)
			{
			case 'R':r++; break;
			case 'B':b++; break;
			case 'G':g++; break;
			case 'Y':y++; break;
			}
		}
	}
	cout << r << " " << b << " " << y << " " << g << endl;

	return 0;
}