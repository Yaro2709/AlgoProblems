#include <iostream>

using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	if (s.size() != t.size())
	{
		cout << "No";
		return 0;
	}
	for (int i = 0; i < s.size(); i++)
		if (((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u')) || ((t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') && (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')))
		{
			cout << "No";
			return 0;
		}
	cout << "Yes";

	return 0;
}