#include<iostream>

using namespace std;

int main()
{
	int n, t1, t2, t3;
	int mx1, mn1, mx2, mn2, mx3, mn3;
	cin >> n;
	cin >> mn1 >> mx1;
	cin >> mn2 >> mx2;
	cin >> mn3 >> mx3;
	if (n <= mx1 + mn2 + mn3)
	{
		t2 = mn2; t3 = mn3; t1 = n - t2 - t3;
	}
	else if (n <= mn3 + mx1 + mx2)
	{
		t1 = mx1; t3 = mn3; t3 = mn3; t2 = n - t1 - t3;
	}
	else
	{
		t1 = mx1; t2 = mx2; t3 = n - t1 - t2;
	}
	cout << t1 << " ";
	cout << t2 << " ";
	cout << t3 << endl;

	return 0;
}