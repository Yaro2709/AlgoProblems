#include<iostream>
#include<vector>

using namespace std;

vector<char> readString(int* it)
{
	vector<char> s;

	for (int i = 0; i < 4; i++)
	{
		char x;

		cin >> x;

		s.push_back(x);
	}

	char temp = s[2];
	s[2] = s[3];
	s[3] = temp;

	for (int i = 0; i < 4; i++)
	{
		if (s[i] == 'X')
			s.erase(s.begin() + i);
	}

	for (int i = 0; i < 3; i++)
	{
		if (s[i] == 'A')
			*it = i;
	}

	return s;
}

int main()
{
	int it1, it2;
	vector<char> s1 = readString(&it1);
	vector<char> s2 = readString(&it2);
	int i = 3;
	bool flag = true;
	while (i--)
	{
		if (s1[it1] != s2[it2])
			flag = false;

		if (it1 == 2)
			it1 = 0;
		else
			it1++;

		if (it2 == 2)
			it2 = 0;
		else
			it2++;
	}

	if (flag)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}