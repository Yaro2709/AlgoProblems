#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    string s;
    cin >> s;
    for (size_t i = 0; i < s.length() / 2; ++i) {

        if (s[i] != s[s.length() - i - 1]) ++c;
    }

    if (c == 1 || (s.length() % 2 != 0 && c == 0)) cout << "YES";
    else cout << "NO";

    return 0;
}