#include<iostream>
#include<algorithm>

using namespace std;

long long x[26] = { 0 };

int main() {
	long long n, a, i, t, ans;
	cin >> n >> a;
	for (i = 0; i < n; ++i)
	{
		char s;
		cin >> s;
		x[s - 'A']++;
	}
	sort(x, x + 26);
	for (i = 25; a > 0; --i)
	{
		t = min(a, x[i]);
		a = a - t;
		ans += t * t;
	}
	cout << ans << endl;
	
	return 0;
}