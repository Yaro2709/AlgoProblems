#include <iostream>

using namespace std;

const int max_n = 40;
int b[max_n][max_n];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			int sum1 = 0, sum2 = 0;
			for (int k = 0; k < n; k++)
			{
				sum1 += b[i][k];
				sum2 += b[k][j];
			}
			ans += (sum2 > sum1);
		}
	}
	cout << ans << endl;

	return 0;
}