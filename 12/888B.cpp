#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string st; cin >> st; 
    int u = 0, d = 0, l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'U') u++;
        if (st[i] == 'D') d++;
        if (st[i] == 'L') l++;
        if (st[i] == 'R') r++;
    }
    cout << 2 * min(l, r) + 2 * min(u, d);

    return 0;
}