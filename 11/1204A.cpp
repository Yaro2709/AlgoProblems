#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int m = s.size();
	for (int i = s.size(); i > 0; i--)
	{
		if (s[i] == '1') {
			m++; break;
		}
	}
	cout << m / 2;

	return 0;
}