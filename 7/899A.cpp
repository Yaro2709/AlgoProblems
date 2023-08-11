#include<iostream>

using namespace std;

int main() {
	int n, e = 0, o = 0, t = 0;
	cin >> n;
	while (n--)
	{
		cin >> e;
		if (e == 1)
			o++;
		else
			t++;
	}
	int ans = min(o, t);
	if (o > t)
		ans += (o - t) / 3;
	cout << ans << endl;

	return 0;
}