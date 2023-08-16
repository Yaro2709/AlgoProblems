#include <iostream>

using namespace std;

int main()
{
	int ans, j = -1, i;
	string s;
	cin >> s; s += 'A';
	for (i = 0; i < s.size(); i++)
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
		{
			ans = max(ans, i - j);
			j = i;
		}
	cout << ans;
    
	return 0;
}