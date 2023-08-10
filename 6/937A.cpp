#include<iostream>
#include<set>

using namespace std;

int main()
{
	int n, a;
	set<int>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a) s.insert(a);
	}
	cout << s.size() << endl;

	return 0;
}