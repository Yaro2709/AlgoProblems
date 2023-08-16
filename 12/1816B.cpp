#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		int ans[3][100005] = { 0 };
		int cnt = 2 * N, p;
		for (int j = 1; j <= N; j += 2)
		{
			ans[1][j] = cnt;
			cnt -= 2;
		}
		cnt = N + 1;
		for (int j = 2; j <= N; j += 2)
		{
			ans[2][j] = cnt;
			cnt += 2;
		}
		cnt = 1, p = 1;
		for (int j = 1, i = 2; j <= N; j++, i += p)
		{
			ans[i][j] = cnt;
			cnt++;
			p = -p;
		}
		for (int i = 1; i <= 2; i++)
		{
			for (int j = 1; j < N; j++)
				cout << ans[i][j] << " ";
			cout << ans[i][N] << endl;
		}
	}

	return 0;
}