#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool a[256] = { false };
    a[96] = true;
    for (int i = 0; i < s.size(); i++)
        if (!a[s[i] - 1])
        {
            cout << "NO";
            return 0;
        }
        else a[s[i]] = true;
    cout << "YES";

    return 0;
}