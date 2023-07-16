#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        x--; y--;
        int d = x + y;
        if ((x == 0 or y == 0) and d > 1)
        {
            cout << -1 << endl;
            continue;
        }
        int pod = min(x, y) * 2;
        cout << d + (d - pod) / 2 * 2 << endl;
    }

    return 0;
}