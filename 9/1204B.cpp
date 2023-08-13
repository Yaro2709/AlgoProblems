#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, l, r, ans1, ans2;
	cin >> n >> l >> r;
	ans1 = pow(2, l) - 1 + (n - l);
	ans2 = pow(2, r) - 1 + (n - r) * pow(2, r - 1);
	cout << ans1 << " " << ans2;
	return 0;
}