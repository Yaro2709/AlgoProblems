#include<iostream>

using namespace std;

int main()
{
    int n, s, m = 0, x, y, z = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x < s || (x == s && y == 0))
        {
            z = 1;
            if (y != 0 && 100 - y > m) m = 100 - y;
        }
    }
    if (!z) cout << "-1" << endl;
    else cout << m << endl;

    return 0;
}