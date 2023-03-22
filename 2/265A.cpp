#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int i = 0;
    for (int j = 0; j < t.size(); j++)
    {
        if (s[i] == t[j]) {
            i++;
        }
    }
    cout << i + 1;

    return 0;
}