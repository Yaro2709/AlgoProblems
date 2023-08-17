#include <iostream>

using namespace std;

int main()
{
	int n;
	int x;
	int mex;
	int temp;
	cin >> n >> x;
	mex = x;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp<x && temp>-1) {
			mex--;
		};
		if (temp == x) {
			mex++;
		};

	};
	cout << mex;

	return 0;
}