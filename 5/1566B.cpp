#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;  
        cin >> s;
        int  su = 0;
        int ss = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                su = 1;
            }

            else if (s[i] != '0' && su == 1)
            {
                ss++;
                su = 0;
            }
        }
        if (s[s.size() - 1] == '0')
        {
            ss++;
        }

        cout << min(ss, 2) << endl;
    }

    return 0;
}