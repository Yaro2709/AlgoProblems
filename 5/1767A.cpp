#include <iostream>

using namespace std;

void solve()
{
    int x1, y1, x2, y2, x3, y3;
    cout << endl;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    if (((x1 == x2) && (y1 == y3 || y2 == y3)) || ((x2 == x3) && (y2 == y1 || y3 == y1)) || ((x3 == x1) && (y3 == y2 || y1 == y2)))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

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