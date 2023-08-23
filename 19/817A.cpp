#include<iostream>

using namespace std;

int main()
{
    int x1, y1, u, v, x, y;
    cin >> x1 >> y1 >> u >> v;
    cin >> x >> y;
    int dx = abs(x1 - u), dy = abs(y1 - v);
    if ((dx % x == 0) && (dy % y == 0))
    {
        int sx = dx / x, sy = dy / y;
        if (abs(sx - sy) % 2 == 0)cout << "YES";
        else cout << "NO";
    }
    else
        cout << "NO";

    return 0;
}