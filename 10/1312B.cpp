#include <iostream>
#include <algorithm>

using namespace std;

int a[1000];

inline void solve()
{
	int n; 
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	reverse(a, a + n);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int T = 1; cin >> T;
	for (int i = 0; i < T; ++i) solve();

	return 0;
}