#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int n, wmax, input;
	while (t--)
	{
		cin >> n >> wmax;
		vector<int> arr(30, 0);
		int sums = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			arr[(int)log2(input)]++;
		}
		int h = 0;
		for (int b = 0; b < n;)
		{
			sums = 0;
			h++;
			for (int i = 29; i >= 0; i--)
			{
				if (arr[i] == 0)
					continue;
				if (sums + pow(2, i) <= wmax)
				{
					sums += pow(2, i);
					arr[i]--;
					b++;
					i++;
				}
			}
		}
		cout << h << '\n';
	}

	return 0;
}