#include<iostream>
#include<set>
#include<string>

using namespace std;

int main() {
	int l, r;
	cin >> l >> r;
	for (int x = l; x <= r; ++x) 
	{
		string s = to_string(x);

		set<char> ss;
		for (char c : s) {
			ss.insert(c);
		}

		if (s.size() == ss.size()) {
			return cout << x << endl, 0;
		}
	}

	cout << -1 << endl;

	return 0;
}