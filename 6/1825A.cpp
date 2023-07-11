#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s; 
        cin >> s;
        int r = -1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[0])
            {
                r = s.length() - 1;
                break;
            }
        }
        cout << r << endl;
    }

    return 0;
}