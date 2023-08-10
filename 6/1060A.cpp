#include<iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n; 
	cin >> s;
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == '8')
			ans++;
	cout << min(ans, n / 11);

	return 0;
}