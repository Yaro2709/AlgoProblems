#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void test()
{
	long long n;
	cin >> n;
	long long t;
	long long cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		while (t % 2 == 0)
		{
			cnt++;
			t /= 2;
		}
	}
	vector<long long>A;
	long long x;
	for (int i = 1; i <= n; i++)
	{
		t = 0;
		x = i;
		while (x % 2 == 0)
		{
			x /= 2;
			t++;
		}
		A.push_back(t);
	}
	sort(A.begin(), A.end(), greater<long long>());
	long long ans = 0;
	while (cnt < n)
	{
		cnt += A[ans];
		ans++;
		if (ans >= n) break;
	}
	if (cnt >= n) cout << ans << endl;
	else cout << -1 << endl;
}

int main()
{
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) test();

	return 0;
}