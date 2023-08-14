#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f, g, h;
	string s;
	b = 0;
	cin >> s;
	for (a = 0; a < s.size(); a++)
		if (s[a] <= 'Z' && s[a] >= 'A')
			b++;
	if (b == s.size()) {
		for (a = 0; a < s.size(); a++)
			s[a] = s[a] + ('a' - 'A');
	}
	else if (b == s.size() - 1 && s[0] <= 'z' && s[0] >= 'a') {
		s[0] = s[0] - ('a' - 'A');
		for (a = 1; a < s.size(); a++)
			s[a] = s[a] + ('a' - 'A');
	}
	cout << s;

	return 0;
}