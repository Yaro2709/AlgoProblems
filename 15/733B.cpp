#include<iostream>

using namespace std;

int main()
{
	int l[100000] = { 0 }, r[100000] = { 0 }, n, i, s = 0, left = 0, right = 0, k = 0, h = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> l[i] >> r[i];
		s = s + l[i] - r[i];
		if (l[i] - r[i] > 0)
		{
			if (l[i] - r[i] > h) {
				h = l[i] - r[i];
				right = i;
			}
		}
		else
		{
			if (l[i] - r[i] < k) { k = l[i] - r[i]; left = i; }
		}
	}
	if (abs(s - 2 * h) > abs(s) && abs(s - 2 * h) > abs(s - 2 * k)) cout << right;
	else if (abs(s - 2 * k) > abs(s)) cout << left;
	else cout << "0";

	return 0;
}