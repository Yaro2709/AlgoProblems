#include <iostream>

using namespace std;

int main()
{
	string f, l;
	cin >> f >> l;
	string ans = "";
	ans += f[0];
	for (int i = 1; i < f.size(); i++)
	{
		if (f[i] >= l[0])
			break;

		ans += f[i];
	}
	ans += l[0];
	cout << ans << endl;

	return 0;
}