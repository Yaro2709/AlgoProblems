#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		int lena = a.length(), lenb = b.length();
		int a1 = 0, b1 = 0;
		for (int i = lenb - 1; i >= 0; --i)
			if (b[i] == '1')
			{
				b1 = lenb - i;
				break;
			}
		for (int i = lena - b1; i >= 0; --i)
			if (a[i] == '1')
			{
				a1 = lena - i;
				break;
			}
		cout << a1 - b1 << endl;
	}
	return 0;
}