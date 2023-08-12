#include <iostream>

using namespace std;

string p = "heidi";
int main()
{
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == p[k])
            k++;
    }
    if (k == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}