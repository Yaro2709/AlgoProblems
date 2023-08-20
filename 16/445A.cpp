#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string s[100000];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	string a[2] = { "WBWB","BWBW" };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == '.') {
				cout << a[i % 2][j % 4];
			}
			else cout << s[i][j];
		}
		cout << endl;
	}

	return 0;
}