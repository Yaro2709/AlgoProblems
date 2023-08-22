#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int p = a.find(b);
	int anw = 0;
	while (p != -1)
	{
		anw++;
		p = a.find(b, p + b.size());
	}
	cout << anw << endl;

	return 0;
}