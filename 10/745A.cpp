#include <iostream>
#include <set>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	set<string> k;
	for (int i = 0; i < l; ++i)
	{
		s = s.substr(l - 1, 1) + s.substr(0, l - 1);
		k.insert(s);
	}

	cout << k.size() << endl;

	return 0;
}