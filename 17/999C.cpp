#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int f[26] = { 0 };
	for (int i = 0; i < n; i++) f[s[i] - 'a']++;
	for (int i = 0; i < 26; i++)
	{
		int t = f[i];
		f[i] -= min(f[i], k);
		k -= min(k, t);
		if (k == 0) break;
	}
	string res;
	for (int i = n - 1; i >= 0; i--)
	{
		if (f[s[i] - 'a'] > 0)
		{
			res += s[i];
			f[s[i] - 'a']--;
		}
	}
	reverse(res.begin(), res.end());
	cout << res << endl;

	return 0;
}