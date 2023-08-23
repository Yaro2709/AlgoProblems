#include<iostream>
#include<map>

using namespace std;

map<string, int> str;

int main()
{
	string s;
	cin >> s;
	for (int i = 1; i <= s.size(); i++)
	{
		for (int j = 0; j <= s.size() - i; j++)
		{
			str[s.substr(j, i)]++;
		}
	}
	int ans = 0;
	for (int i = 1; i <= s.size(); i++)
	{
		for (int j = 0; j <= s.size() - i; j++)
		{
			if (str[s.substr(j, i)] >= 2)
			{
				ans = i;
			}
		}
	}
	cout << ans << endl;
	return 0;
}