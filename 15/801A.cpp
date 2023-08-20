#include<iostream>

using namespace std;

char last;
int ans;
bool P[110];

int main()
{
	int i, j;
	string str;
	cin >> str;
	last = str[0];
	for (i = 1; i <= str.size(); i++)
	{
		if (last == 'V' && str[i] == 'K')
		{
			ans++;
			P[i] = P[i - 1] = 1;
		}
		last = str[i];
	}
	last = str[0];
	for (i = 1; i < str.size(); i++)
	{
		if (str[i] == last && !P[i] && !P[i - 1])
		{
			ans++;
			break;
		}
		last = str[i];
	}
	cout << ans;

	return 0;
}