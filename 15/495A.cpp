#include<iostream>

using namespace std;

int main()
{
	int arr[10] = { 2, 7, 2, 3, 3, 4, 2, 5, 1, 2 };
	int n;
	cin >> n;
	int x = n % 10;
	n /= 10;
	cout << arr[x] * arr[n] << endl;

	return 0;
}