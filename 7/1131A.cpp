#include<iostream>

using namespace std;

int main()
{
	int w1, w2, h1, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	cout << (max(w1, w2) + h1 + h2 + 2) * 2 << endl;
	return 0;
}