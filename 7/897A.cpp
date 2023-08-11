#include<iostream>

using namespace std;

int main()
{
	int n, m;
	string s;
	cin >> n >> m >> s;
	for (int i = 0; i < m; ++i)
	{
		int l, r;
		char a, b;
		cin >> l >> r >> a >> b;
		l--;
		for (int j = l; j < r; ++j) {
			if (s[j] == a) {
				s[j] = b;
			}
		}
	}
	cout << s << endl;

	return 0;
}