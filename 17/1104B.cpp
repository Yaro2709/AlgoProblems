#include<iostream>

using namespace std;

int main()
{
    int c = 0;
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            s.erase(i - 1, 2);
            c++;
            i -= 2;
        }
    }
    if (c % 2 == 0)cout << "NO";
    else cout << "YES";

    return 0;
}