#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int p = 1; p <= t; p++) {
		char a[10001];
		cin >> a;
		
		int ans = 0;
		int bol[10001] = { 0 };
		for (int i = 0; i < strlen(a); i++) {
			if (bol[a[i] - 'a' + 1] == 0) {
				ans++;
				bol[a[i] - 'a' + 1]++;
			}
			else {
				bol[a[i] - 'a' + 1]++;
			}
		}

		int ll = 0;
		int l = 0;
		for (int i = 1; i <= 26; i++) {
			if (bol[i] >= 2) {
				ll++;
			}
			if (bol[i] == 1) {
				l++;
			}
		}

		cout << (ll + l / 2) << endl;
	}

	return 0;
}