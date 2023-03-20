#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s;
		char c;
		cin >> s >> c;

		bool flag = false;
		for (int i = 0; i < s.size(); i++)
		{
			if ((i + 1) % 2 == 1 && s[i] == c)
			{
				cout << "YES" << endl;
				flag = true;
				break;
			}
		}

		if (!flag)
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}