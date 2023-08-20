#include<iostream>

using namespace std;

int main()
{
    int n, s, h, m, h1, m1, t, f = 1;
    cin >> n >> s;
    cin >> h >> m;
    if (h * 60 + m >= s + 1)
    {
        cout << "0 0";
        for (int i = 1; i < n; ++i)
        {
            cin >> h >> m;
        }
        return 0;
    }
    for (int i = 1; i < n; ++i)
    {
        h1 = h, m1 = m;
        cin >> h >> m;
        t = (h - h1) * 60 + m - m1;
        if (t >= 2 * s + 2 && f)
        {
            cout << h1 + (m1 + s + 1) / 60 << ' ' << (m1 + s + 1) % 60;
            f = 0;
        }
    }
    if (f)
    {
        cout << h + (m + s + 1) / 60 << ' ' << (m + s + 1) % 60;
    }
    return 0;
}