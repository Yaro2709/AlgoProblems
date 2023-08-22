#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int maxx = 0;
	int count = 0;
	int lc = 0, rc = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(')
		{
			lc++;
			count--;
		}
		else
		{
			rc++;
			count++;
		}

		maxx = max(maxx, count);
	}
	if (maxx <= 1 && lc == rc)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}