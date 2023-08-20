#include<iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a = 1e9, b = 1e9, c = 1e9;
    int k = 1e9;
    if (s.find('1') == -1 || s.find('2') == -1 || s.find('3') == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                a = i;
            }
            else if (s[i] == '2')
            {
                b = i;
            }
            else if (s[i] == '3')
            {
                c = i;
            }
            k = min(k, max({ a,b,c }) - min({ a,b,c }) + 1);
        }
        cout << k << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}