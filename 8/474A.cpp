#include <iostream>

using namespace std;

int main()
{
	string K = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string m;
	char a;
	cin >> a;
	cin >> m;
	for (int i = 0; i < m.length(); i++) {
		for (int j = 0; j < K.length(); j++) {
			if (m[i] == K[j]) {
				if (a == 'R') {
					cout << K[j - 1];
				}
				else {
					cout << K[j + 1];
				}
			}
		}
	}

	return 0;
}