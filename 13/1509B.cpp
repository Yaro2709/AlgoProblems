#include<iostream>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		string s; 
		cin >> s;
		bool flag1 = 1;
		int cnt_t = 0, cnt_m = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'T')cnt_t++;
			else if (s[i] == 'M') {
				cnt_m++;
				if (cnt_t < cnt_m) {
					flag1 = 0; break;
				}
			}
		}

		if (flag1 == 0) {
			cout << "NO" << endl;
			continue;
		}

		bool flag2 = 1;
		int cnt_t2 = 0, cnt_m2 = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == 'T')cnt_t2++;
			else if (s[i] == 'M') {
				cnt_m2++;
				if (cnt_t2 < cnt_m2) {
					flag2 = 0; break;
				}
			}
		}

		if (flag2 == 0) {
			cout << "NO" << endl;
			continue;
		}

		if (flag1 && flag2 && cnt_t == cnt_m * 2 && cnt_t2 == cnt_m2 * 2) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}

	return 0;
}