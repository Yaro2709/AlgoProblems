#include <iostream>

using namespace std;

int main()
{
	string a, b;
	int i, j;
	cin >> a >> b;
	i = a.size() - 1;
	j = b.size() - 1;
	while ((i >= 0 && j >= 0) && a[i] == b[j])
	{
		i--; j--;
	}
	cout << i + j + 2;

	return 0;
}