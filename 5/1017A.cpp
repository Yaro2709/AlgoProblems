#include<iostream>

using namespace std;

int main() 
{
	int n, a, b, c, d, max, t = 1;
	cin >> n;
	cin >> a >> b >> c >> d;
	max = a + b + c + d;
	for (int i = 2; i <= n; i++) {
		cin >> a >> b >> c >> d;
		a + b + c + d > max ? t++ : t = t;
	}
	cout << t;

	return 0;
}