#include<iostream>

using namespace std;

int main(void)
{
	int n;
	string str;
	cin >> n;
	cin >> str;
	int k = str.size();
	char *mas = new char[k];
	for (int i = 0; i < k; ++i)
	{
		mas[i] = '?';
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			if (mas[j] != '.' && str[j] != '?'
				&& mas[j] != '?' && mas[j] != str[j])
				mas[j] = '.';
			if (mas[j] != '.' && str[j] != '?' && mas[j] == '?')
				mas[j] = str[j];
		}
		if (i != n - 1)
			cin >> str;
	}
	for (int i = 0; i < k; ++i)
	{
		if (mas[i] == '?')
			cout << "x";
		if (mas[i] != '?' && mas[i] != '.')
			cout << mas[i];
		if (mas[i] == '.')
			cout << "?";
	}

	delete[] mas;

	return 0;
}