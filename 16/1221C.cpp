#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, m, x;
        cin >> c >> m >> x;
        int p = (c + m + x) / 3;
        cout << min(p, min(c, m)) << endl;
    }

    return 0;
}