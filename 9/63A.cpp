#include <iostream>

using namespace std;

int main() {
	int n;
	string a[1000], b[1000];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == "rat")
			cout << a[i] << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == "woman" || b[i] == "child")
			cout << a[i] << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == "man")
			cout << a[i] << endl;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == "captain")
			cout << a[i] << endl;
	}
	return 0;
}