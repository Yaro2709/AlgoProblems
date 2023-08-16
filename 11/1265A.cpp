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
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                for (char j = 'a'; j <= 'c'; j++)
                {
                    if (s[i - 1] != j && s[i + 1] != j)
                        s[i] = j;
                }
            }
            else if (s[i] == s[i + 1])
            {
                s = "-1";
            }
        }
        cout << s << endl;
    }

    return 0;
}