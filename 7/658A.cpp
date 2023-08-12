#include <iostream>

using namespace std;

int main()
{
    int n, c, a[10000], b[1000], t1 = 0, t2 = 0, t3 = 0;
    cin >> n >> c;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++)
    {
        t3 += b[i];
        if (a[i] - c * t3 < 0) t1 -= a[i] - c * t3;
        t1 += a[i] - c * t3;
    }
    t3 = 0;
    for (int i = n; i >= 1; i--)
    {
        t3 += b[i];
        if (a[i] - c * t3 < 0) t2 -= a[i] - c * t3;
        t2 += a[i] - c * t3;
    }

    if (t1 > t2)        cout << "Limak";
    else if (t2 > t1)   cout << "Radewoosh";
    else                cout << "Tie";

    return 0;
}