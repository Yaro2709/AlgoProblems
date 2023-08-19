#include<iostream>

using namespace std;

int main()
{
	long long int l1, r1, l2, r2, k, l, r;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	l = max(l1, l2);
	r = min(r1, r2);
	long long int time = r - l + 1;
	if (k >= l && k <= r)
		time--;
	if (time < 0)
		cout << 0 << endl;
	else
		cout << time << endl;

	return 0;
}