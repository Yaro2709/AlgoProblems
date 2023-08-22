#include<iostream>

using namespace std;

int main()
{
	int sm[] = { 0,0,0 };
	for (int i = 0; i < 3; i++)
	{
		string t; cin >> t;
		if (t[1] == '>')sm[t[2] - 'A']++;
		else sm[t[0] - 'A']++;
	}
	char small, middle, big;
	if (sm[0] == 1 && sm[1] == 1 && sm[2] == 1) {
		cout << "Impossible"; return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		if (sm[i] == 2)
			small = i + 'A';
		if (sm[i] == 1)
			middle = i + 'A';
		if (sm[i] == 0)
			big = i + 'A';
	}
	cout << small << middle << big;

	return 0;
}