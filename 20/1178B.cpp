#include<iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int a = 0, b = 0, c = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'o')
			b += a;
		else if (s[i - 1] == 'v') {
			a++;
			c += b;
		}
	}
	cout << c << endl;

	return 0;
}