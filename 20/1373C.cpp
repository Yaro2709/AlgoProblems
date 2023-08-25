#include<iostream>
#include<string>

using namespace std;

int main()
{
	long long i, t, w, c, n;
	cin >> t;
	string s;
	long long a;
	for (w = 0; w < t; w++)
	{
		cin >> s;
		n = s.length();
		c = 0;
		a = 0;
		for (i = 0; i < n; i++)
		{
			if (s[i] == '-')
			{
				c--;
			}
			else
			{
				c++;
			}
			if (c < 0) {
				a += (i + 1);
				c++;
			}
		}
		a += n;
		cout << a << "\n";
	}

	return 0;
}