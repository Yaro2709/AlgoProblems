#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	string s1 = "1";
	if (n == 1)
	{
		cout << s;
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			if (s[i] == '0') {
				s1 = s1 + "0";
			}
		}
		cout << s1;
	}

	return 0;
}