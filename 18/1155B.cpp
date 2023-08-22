#include<iostream>

using namespace std;

const int maxn = 1e5 + 10;
char s[maxn];

int main()
{
	int n, sum1 = 0, sum2 = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n - 10; i++)
	{
		if (s[i] == '8')	sum1++;
		else	sum2++;
	}
	if (sum2 < sum1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}