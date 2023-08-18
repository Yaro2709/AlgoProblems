#include<iostream>

using namespace std;

int main()
{
    int long long a, b, c, d, e, f, x, y, x1, x2, y1, y2, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        e = x + b - a;
        f = y + d - c;

        if ((e >= x1 && e <= x2) && (f >= y1 && f <= y2) && ((x1 < x2 || (a + b == 0)) && (y1 < y2 || (c + d == 0))))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}