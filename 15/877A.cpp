#include<iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int c = 0;
	for (int i = 0; i < s.size(); i++)
		if (s.substr(i, 3) == "Ann" || s.substr(i, 4) == "Olya" || s.substr(i, 5) == "Danil" || s.substr(i, 5) == "Slava"
			|| s.substr(i, 6) == "Nikita")
			c++;
	if (c == 1)
		cout << "YES";
	else cout << "NO";

	return 0;
}