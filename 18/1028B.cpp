#include<iostream>

using namespace std;

const int N = 220;
char s[N][N];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cout << 1;
	cout << endl;
	for (int i = 1; i < n; i++) cout << 8;
	cout << 9 << endl;

	return 0;
}