#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s[0] = s[s.size() - 1];
        cout << s << endl;
    }

    return 0;
}