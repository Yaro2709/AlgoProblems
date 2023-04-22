#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		string s1 = s;
		reverse(s1.begin(), s1.end());
		string ans = s + s1;
		cout << ans << endl;
	}

	return 0;
}