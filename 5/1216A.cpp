#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = 0;
	for (int i = 0; i < n; i += 2)
	{
		if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
			continue;
		ans++;
		s[i + 1] = 'b';
		s[i] = 'a';
	}

	cout << ans << endl << s << endl;

	return 0;
}