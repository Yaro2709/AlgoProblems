#include<iostream>

using namespace std;

int main() {
	int n; 
	cin >> n; 
	string s; 
	cin >> s; 
	int j = n, k = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '-' && k != 0)
			k--;
		else if (s[i] == '-') {}
		else
			k++;

	}
	cout << k;

	return 0;
}