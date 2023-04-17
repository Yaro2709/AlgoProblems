#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (s2[i] == '1') {
				if (i >= 1) {
					if (s1[i - 1] == '1') {
						s1[i - 1] = '2', ans++; continue;
					}
				}
				if (s1[i] == '0') {
					s1[i] = '2', ans++; continue;
				}
				if (i < n - 1) {
					if (s1[i + 1] == '1') {
						s1[i + 1] = '2', ans++; continue;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}