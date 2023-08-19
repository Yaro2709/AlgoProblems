#include<iostream>

using namespace std;

int main() {
	string s;
	long long int r = 0, l = 0, d = 0, u = 0;
	cin >> s;
	if (s.length() % 2 != 0)
		cout << "-1";
	else {
		long long int t = s.length() / 4, p = s.length() / 2, a[] = { 0,0,0 };
		for (long long int i = 0; i < s.length(); i++) {
			if (s[i] == 'R')
				r++;
			else if (s[i] == 'L')
				l++;
			else if (s[i] == 'U')
				u++;
			else
				d++;
		}
		cout << (abs(r - l) + abs(d - u)) / 2;
	}

	return 0;
}