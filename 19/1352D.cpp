#include<iostream>
#include<vector>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> candy(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> candy[i];
	int cnt = 0;
	int a = 0, b = 0, l = 1, r = n, last_a = 0, last_b = 0;
	while (l <= r) {
		int sum_a = 0;
		cnt++;
		while (l <= r && sum_a <= last_b) {
			sum_a += candy[l++];
		}
		a += sum_a;
		last_a = sum_a;
		if (l > r)break;

		int sum_b = 0;
		cnt++;
		while (l <= r && sum_b <= last_a) {
			sum_b += candy[r--];
		}
		b += sum_b;
		last_b = sum_b;
	}
	cout << cnt << " " << a << " " << b << '\n';
}

int main()
{
	int T = 1;
	cin >> T;
	while (T--)solve();

	return 0;
}