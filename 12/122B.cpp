#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
            c1++;
        else if (s[i] == '7')
            c2++;
    }
    if (!c1 && !c2)
        cout << -1 << "\n";
    else if (c1 >= c2)
        cout << "4\n";
    else
        cout << "7\n";

    return 0;
}