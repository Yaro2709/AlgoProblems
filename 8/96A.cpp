#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int c1 = 0, c0 = 0, i = 0;
    string res = "NO\n";
    while (i < n)
    {
        while (i < n && s[i] == '0')
            c0++, i++;
        while (i < n && s[i] == '1')
            c1++, i++;
        if (c0 >= 7 || c1 >= 7)
            res = "YES\n";
        c0 = 0, c1 = 0;
    }
    cout << res;

    return 0;
}