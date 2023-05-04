#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		string s; 
		cin >> s;
		int pos = -1;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != 'a') {
				pos = i; 
				break;
			}
		}

		if (pos == -1) {
			cout << "NO" << endl; 
			continue;
		}

		cout << "YES" << endl;

		string t = "a" + s;
		string tt = t;

		reverse(t.begin(), t.end());

		if (t == tt) {
			cout << s << "a" << endl;
		}
		else {
			cout << tt << endl;
		}
	}

	return 0;
}