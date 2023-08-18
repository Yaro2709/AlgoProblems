#include<iostream>
#include<algorithm>

using namespace std;

bool compare(string& s1, string& s2)
{
	return s1.size() < s2.size();
}

int main()
{
	int n;
	string s[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];

	}
	sort(s, s + n, compare);
	for (int i = 1; i < n; i++)
	{
		if (s[i] == s[i - 1])
		{
			continue;
		}
		if (s[i].find(s[i - 1]) == string::npos)
		{
			cout << "NO" << endl;
			return 0;
		}

	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << endl;

	}
	
	return 0;
}