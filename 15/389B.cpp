#include<iostream>

using namespace std;

#define SIZE 100+10

char board[SIZE][SIZE];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i < n; i++) {
		bool no = false;
		for (int j = 0; j < n; j++) {
			if (board[i][j] == '.')
				continue;
			board[i][j] = '.';
			if (i + 2 >= n || board[i + 2][j] == '.') {
				no = true;
				break;
			}
			board[i + 2][j] = '.';
			if (j + 1 >= n || board[i + 1][j + 1] == '.') {
				no = true;
				break;
			}
			board[i + 1][j + 1] = '.';
			if (j - 1 < 0 || board[i + 1][j - 1] == '.') {
				no = true;
				break;
			}
			board[i + 1][j - 1] = '.';
			if (board[i + 1][j] == '.') {
				no = true;
				break;
			}
			board[i + 1][j] = '.';
		}
		if (no) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}