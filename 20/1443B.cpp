#include<iostream>

using namespace std;

#define rep(i,a,n) for(int i=a;i<=n;i++)

int main() {
	int t, a, b;
	string s;
	cin >> t;
	while (t--) {
		cin >> a >> b >> s;
		int len = s.size();
		int pos = 0, ans = 0;
		int cnt = 987654;
		rep(i, 0, len - 1) {
			if (s[i] == '1') {

				pos = i;
				break;
			}
		}

		bool flag = false;
		rep(i, pos, len - 1) {
			if (s[i] == '1') {
				if (!flag) {
					ans += min(a, cnt * b);
					flag = true;
					cnt = 0;
				}
			}
			else {
				flag = false;
				cnt++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}