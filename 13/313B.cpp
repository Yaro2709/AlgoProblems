#include<iostream>

using namespace std;

int a[100005];

int main()
{
	int n;
	string s;
	cin >> s >> n;
	for (int i = 1; i < s.size(); i++)
	{
		a[i] = a[i - 1];
		if (s[i] == s[i - 1])a[i]++;
	}
	for (int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		cout << a[r - 1] - a[l - 1] << "\n";
	}

	return 0;
}