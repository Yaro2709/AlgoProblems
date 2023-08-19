#include<iostream>

using namespace std;

int main() 
{
	string s, s1;
	cin >> s >> s1;

	int count = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] != s1[i])
			count++;

	if (count % 2 == 1)
		cout << "impossible" << endl;
	else
	{

		int changes = count / 2;
		for (int i = 0; i < s.size(); i++)
		{
			if (changes == 0)
				break;
			if (s[i] != s1[i])
			{
				s[i] = s1[i]; changes--;
			}
		}
		cout << s;
	}
	return 0;
}