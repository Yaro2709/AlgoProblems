#include <iostream>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	long long int max;
	max = a.size();
	if (max < b.size())
		max = b.size();

	if (a == b)
		cout << "-1";
	else
		cout << max;

	return 0;
}