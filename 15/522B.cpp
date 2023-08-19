#include<iostream>

using namespace std;

int height[200001];
int width[200001];

int main()
{
	int n, W = 0, max1 = 0, max2 = 0, H, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> width[i] >> height[i];
		sum += width[i];
		if (height[i] > max1)
		{
			max2 = max1;
			max1 = height[i];
		}
		else if (height[i] == max1)
			max2 = height[i];
		else
		{
			if (height[i] > max2)
				max2 = height[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (height[i] == max1)
			H = max2;
		else
			H = max1;
		W = sum - width[i];
		cout << H * W << " ";
	}
	cout << "\n";

	return 0;
}