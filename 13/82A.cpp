#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s[5] = { "Sheldon","Leonard","Penny","Rajesh","Howard" };
	while (n > 5)
		n = n / 2 - 2;
	cout << s[n - 1];

	return 0;
}