#include <iostream>

using namespace std;

const int Maxn = 30010;
string s[Maxn];
int n, j, ans;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (j = 0; j < s[0].size(); j++) {
		for (int i = 1; i < n; i++) {
			if (s[0][j] == s[i][j]) {
				ans++;
			}
			else
			{
				ans /= (n - 1);
				cout << ans << endl;
				return 0;
			}
		}
	}

	return 0;
}