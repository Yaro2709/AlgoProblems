#include<iostream>

using namespace std;

int main() 
{
	int k[4];
	cin >> k[0] >> k[1] >> k[2] >> k[3];

	int m1 = min(k[0], min(k[2], k[3]));
	k[0] -= m1;
	k[2] -= m1;
	k[3] -= m1;

	int m2 = min(k[0], k[1]);

	cout << ((m1 * 256) + (m2 * 32)) << endl;

	return 0;
}