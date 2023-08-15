#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		string a;
		int s[200] = { 0 };
		cin >> a;
		for (int i = 0; i < a.size(); i++)
		{
			s[a[i]]++;
		}
		int sum = 0, ans = 0;
		for (int i = 'a'; i <= 'z'; i++)
		{
			sum += min(s[i], s[i - 32]);
			ans += abs(s[i] - s[i - 32]) / 2;
		}
		sum += min(ans, k);
		cout << sum << endl;
	}

	return 0;
}