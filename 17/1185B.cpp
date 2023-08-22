#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str1, str2;
		cin >> str1;
		cin >> str2;
		int i = 0, j, l = 0, m, n;
		int flag = 0;
		while (i < str1.size())
		{
			char c = str1[i], d = str2[l];
			int k = 0;
			j = i; m = l;
			int n = 0;
			if (c != d)
			{
				flag = 1;
				break;
			}
			while (c == str1[j])
			{
				j++; k++;
			}
			while (d == str2[m])
			{
				m++; n++;
			}
			if (n < k)
			{
				flag = 1;
				break;
			}
			i = j;
			l = m;
		}
		if (flag || l != str2.size())
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}