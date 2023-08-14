#include <iostream>

using namespace std;

int main()
{
    int f = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        if (s2[i] > s1[i]) { f = 1; break; }
    }

    if (f)  cout << "-1";
    else    cout << s2;

    return 0;
}