#include<iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int t = s.size() / 2 - 1 + (s.size() % 2);
	cout << s[t];
	int t1 = t;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
		{
			t++;
			if (t < s.size())cout << s[t];
		}
		else
		{
			t1--;
			if (t1 >= 0)cout << s[t1];
		}
	}

	return 0;
}