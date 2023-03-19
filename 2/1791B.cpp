#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string m;
    cin >> m;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] == 'U')
            x++;
        else if (m[i] == 'D')
            x--;
        else if (m[i] == 'R')
            y++;
        else
            y--;
        if (x == 1 && y == 1)
        {
            cout << "YES" << endl; 
            return;
        }
    }
    cout << "NO" << endl;
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