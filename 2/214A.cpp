#include <iostream>

using namespace std;

int main() 
{
	int n;
	int m;
	cin >> n >> m;

	int cnt = 0;
	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j <= 1000; j++) {
			if (((i * i + j) == n) && ((j * j + i) == m)) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}