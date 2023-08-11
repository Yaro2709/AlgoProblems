#include<iostream>

using namespace std;

int main()
{
	char s[4][4];
	for (int i = 0; i < 3; i++)
	{
		cin >> s[i];
	}
	if (s[0][0] == s[2][2] && s[0][2] == s[2][0] && s[1][0] == s[1][2] && s[0][1] == s[2][1]) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}