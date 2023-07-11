#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s; 
		int cc = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '?')
			{
				++cc;
			}
		}

		if (s[0] == '0')
		{
			cout << 0 << endl;
		}
		else
		{
			if (s[0] == '?')
			{
				cout << pow(10, cc) - pow(10, cc - 1) << endl;
			}
			else
			{
				cout << pow(10, cc) << endl;
			}
		}
	}

	return 0;
}