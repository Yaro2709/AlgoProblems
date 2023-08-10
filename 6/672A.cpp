#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	string x = "";
	cin >> n;
	for (int i = 1; i <= 1000; i++)
	{
		x += to_string(i);
	}
	cout << x[n - 1];

	return 0;
}