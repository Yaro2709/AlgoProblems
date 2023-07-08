#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int k;
	cin >> k;
	while (k--) {
		int n, m;
		cin >> n >> m;
		vector<string> s(n);
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}

		int mini = 100;
		int minj = 100;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (s[i][j] == 'R') {
					if (i < mini) {
						mini = i;
					}
					if (j < minj) {
						minj = j;
					}
				}
			}
		}

		if (s[mini][minj] == 'R') {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}