#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string test = "314159265358979323846264338327";
		string name;
		cin >> name;

		int number = 0;
		for (int i = 0; i < name.size(); i++) {
			if (name[i] == test[i]) {
				number++;
			}
			else {
				break;
			}
		}

		cout << number << endl;
	}

	return 0;
}