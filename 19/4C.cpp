#include<iostream>
#include<map>

using namespace std;

map<string, int> mp;

int main() {
	int c;
	cin >> c;
	string s;
	for (int i = 0; i < c; i++) {
		cin >> s;
		mp[s]++;
		if (mp[s] == 1)
			cout << "OK" << endl;
		else
			cout << s << mp[s] - 1 << endl;
	}

	return 0;
}