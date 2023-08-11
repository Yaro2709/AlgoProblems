#include<iostream>

using namespace std;

int main() 
{
	long long int a, b, c;
	cin >> a >> b >> c;
	if (c + b - 2 <= a + a - c - b) {
		cout << "White";
	}
	else {
		cout << "Black";
	}
	b = c;

	return 0;
}