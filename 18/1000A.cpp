#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	string *s1 = new string[n]; 
	string *s2 = new string[n];
	for (i = 0; i < n; i++)
	{
		cin >> s1[i];
	}
	for (i = 0; i < n; i++)
	{
		cin >> s2[i];
	}

	int flag = 0;
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s2[j] != "blah")
			{
				if (s1[i] == s2[j])
				{
					flag++;
					s2[j] = "blah";
					break;
				}
			}
		}
	}
	cout << n - flag;

	delete[] s1;
	delete[] s2;

	return 0;
}