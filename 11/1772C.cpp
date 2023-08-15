#include <iostream>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	int cnt = 1;
	int i = 0;
	for (i = 0; i < a && cnt + a - 1 <= b; i++) {
		cout << cnt + i << ' ';
		cnt += i;
	}
	for (; i < a; i++) {
		cout << cnt + 1 << ' ';
		cnt++;
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	while (n) {
		solve();
		n--;
	}

	return 0;
}