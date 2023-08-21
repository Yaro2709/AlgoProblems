#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n, answer = 1;
	string s1, s2, s3;
	map<string, int> list;
	list["polycarp"] = 1;
	cin >> n;
	while (n-- > 0) {
		cin >> s1 >> s2 >> s3;
		for (int i = 0; i < s1.size(); i++)
			s1[i] = tolower(s1[i]);
		for (int i = 0; i < s3.size(); i++)
			s3[i] = tolower(s3[i]);
		int m = list[s3] + 1;
		if (m > answer)
			answer = m;
		list[s1] = m;
	}
	cout << answer;

	return 0;
}