#include<iostream>

using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	char x; 
	char *a = new char[c];
	for (int i = 0; i < r - 1; i++)
		for (int j = 0; j < c; j++)
			cin >> x;
	for (int i = 0; i < c; i++)
		cin >> a[i];
	int cnt = 0;
	if (a[0] == 'B')
		cnt = 1;

	for (int i = 1; i < c; i++)
		if (a[i] == 'B' && a[i - 1] == '.')
			cnt++;
	cout << cnt;

	delete[] a;

	return 0;
}