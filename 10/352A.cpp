#include <iostream>

using namespace std;

int main()
{
    int n, z = 0, f = 0;
    cin >> n;
    for (int x, i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0) z++;
        else if (x == 5) f++;
    }
    f /= 9;
    if (!f || !z) cout << ((z != 0) ? 0 : -1) << endl;
    else
    {
        f *= 9;
        while (f)
        {
            cout << 5;
            f--;
        }
        while (z)
        {
            cout << 0;
            z--;
        }
        cout << endl;
    }

    return 0;
}