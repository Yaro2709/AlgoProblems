#include <algorithm>
#include <iostream>

using namespace std;

string str;
int c[26];
pair <int, char> a[26];

int main()
{
	int k;
	cin >> str >> k;
	for (char i = 'a'; i <= 'z'; i++)
		a[i - 'a'].second = i;
	for (int i = 0; i < str.size(); i++)
		a[str[i] - 'a'].first++;
	sort(a, a + 26);
	int ct = 0, p = -1;
	for (int i = 0; i < 26; i++)
	{
		ct += a[i].first;
		c[a[i].second - 'a'] = i;
		if (ct <= k)
			p = i;
	}
	cout << 25 - p << endl;
	for (int i = 0; i < str.size(); i++)
		if (c[str[i] - 'a'] > p)
			cout << str[i];
	return 0;
}