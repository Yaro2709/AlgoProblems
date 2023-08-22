#include<iostream>

using namespace std;

int main()
{
	long long int k, i, x;
	cin >> x;
	string s, s2;
	cin >> s;
	k = x - 1;
	for (i = 0; i < x - 1; i++)
	{
		if (s[i] > s[i + 1])
		{
			k = i;
			break;
		}
	}
	s2 = s.substr(0, k) + s.substr(k + 1, x - (k + 1));
	cout << s2;

	return 0;
}