#include<iostream>

using namespace std;

void solve() {
	int R, P, S, n, k = 0;
	cin >> n >> R >> P >> S;
	string s, t;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) t += "1";
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == 'R' && P > 0) k++, P--, t[i] = 'P';
		if (s[i] == 'P' && S > 0) k++, S--, t[i] = 'S';
		if (s[i] == 'S' && R > 0) k++, R--, t[i] = 'R';
	}
	for (int i = 0; i < t.length(); ++i)
	{
		if (t[i] == '1' && P > 0) P--, t[i] = 'P';
		else
			if (t[i] == '1' && S > 0) S--, t[i] = 'S';
			else
				if (t[i] == '1' && R > 0) R--, t[i] = 'R';
	}
	if ((n + 2 - 1) / 2 > k) cout << "NO\n";
	else cout << "YES" << endl << t << endl;
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		solve();
	}

	return 0;
}