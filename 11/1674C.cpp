#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		long long ans = 1LL << s1.size();
		if (s2.size() == 1 && s2[0] == 'a')
			cout << 1 << endl;
		else if (s2.find('a') != -1)
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}