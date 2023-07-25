#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int long long n, m;
        cin >> n >> m;
        int long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ct1 = 4, ct2 = 4;
        if (x1 == 1) ct1--;
        if (x2 == 1) ct2--;
        if (y1 == 1) ct1--;
        if (y2 == 1) ct2--;

        if (x1 == n) ct1--;
        if (x2 == n) ct2--;
        if (y1 == m) ct1--;
        if (y2 == m) ct2--;

        cout << min(ct1, ct2) << endl;
    }

    return 0;
}