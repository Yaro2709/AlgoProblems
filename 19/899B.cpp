#include<iostream>

using namespace std;

int main()
{
	int t;
	string s = "312931303130313130313031312831303130313130313031312831303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312831303130313130313031";
	while (cin >> t)
	{
		string ans = "";
		string ss;
		for (int i = 0; i < t; i++)
		{
			cin >> ss;
			ans += ss;
		}
		if (s.find(ans) != s.npos)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}