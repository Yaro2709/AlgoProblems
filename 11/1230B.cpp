#include <iostream>

using namespace std;

int main() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	if (n == 1 && k > 0) {
		cout << 0;
	}
	else {
		if (k != 0) {
			int i = 0;
			if (s[0] == '1')
				i++;
			else
			{
				i++;
				s[0] = '1';
				k--;
			}
			for (; i < n && k>0; i++) {
				if (s[i] == '0')
					continue;
				s[i] = '0';
				k--;
			}
		}
		cout << s;
	}
	return 0;
}