#include<iostream>
#include<set>

using namespace std;

int main() {
	int x, y, z, sum = 0;
	cin >> x >> y;
	multiset<int>m;
	for (size_t i = 0; i < x; i++)
	{
		cin >> z;
		m.insert(z);
	}

	for (size_t i = 0; i < y; i++) {

		auto it = m.begin();
		z = *it;
		m.erase(m.begin());
		m.insert((z) * -1);
	}

	for (auto m : m)
	{
		sum += m;
	}
	cout << sum << endl;

	return 0;
}