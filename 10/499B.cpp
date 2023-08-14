#include <iostream>
#include <map>

using namespace std;

map<string, string>ma;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        string s, s1;
        cin >> s >> s1;
        ma[s] = s1;
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.size() <= ma[s].size())cout << s << ' ';
        else cout << ma[s] << ' ';
    }

    return 0;
}