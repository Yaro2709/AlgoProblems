#include <iostream>

using namespace std;

int main()
{
	int i, n;
	cin >> n;
	int arr[7];
	int sum = 0;
	for (i = 0; i < 7; i++) cin >> arr[i];
	for (i = 0; ; i++) {
		if (i == 7) i = 0;
		sum += arr[i];
		if (sum >= n) break;
	}
	cout << i + 1 << endl;

	return 0;
}