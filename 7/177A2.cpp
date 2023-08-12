#include <iostream>

using namespace std;

int arr[101][101];

int main()
{
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if (i == j || i + j == N - 1 || i == (N - 1) / 2 || j == (N - 1) / 2)
				arr[i][j] *= 1;
			else	arr[i][j] *= 0;

			sum += arr[i][j];
		}

	}
	cout << sum << endl;

	return 0;
}