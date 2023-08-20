#include<iostream>

using namespace std;

int n, minx = 1010, miny = 1010, maxx = -1010, maxy = -1010;

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (minx > a)
            minx = a;
        if (maxx < a)
            maxx = a;
        if (miny > b)
            miny = b;
        if (maxy < b)
            maxy = b;
    }

    if (minx != maxx && miny != maxy)
        cout << (maxx - minx) * (maxy - miny);
    else
        cout << "-1";

    return 0;
}