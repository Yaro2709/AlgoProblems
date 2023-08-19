#include<iostream>

using namespace std;

#define maxlen 110000

int main()
{
	int n, a[maxlen], s = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == i)
			s++;
	}
	int add = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != i)
		{
			if (a[a[i]] == i)
			{
				add = 2;
				break;
			}
			add = 1;
		}
	}
	cout << add + s;
    
	return 0;
}