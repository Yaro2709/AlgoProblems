#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int j = 0;
	for (int i = 1; i <= n; i++) {
		cout << s[i-1];
		j += 1;
		i += j;
	}

	return 0;
}