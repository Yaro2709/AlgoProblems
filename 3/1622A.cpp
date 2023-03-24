#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
	cin >> t;
	while (t--)
	{
		int l[3];
		for (int i = 0; i < 3; i++) {
			cin >> l[i];
		}

		sort(l, l + 3);

		if (l[0] + l[1] == l[2] || (l[0] == l[1] && l[2] % 2 == 0) 
				|| 
			(l[1] == l[2] && l[0] % 2 == 0)
		) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}