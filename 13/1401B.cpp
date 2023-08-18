#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int p = 0, q = 0, t1 = 0, z = 0, n = 0, m = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, x = 0, y = 0, h = 0, ans = 0, l = 0, r = 0, k = 0, d = 0, a, b, c, a1, b1, c1;
        cin >> a >> b >> c >> a1 >> b1 >> c1;
        ans += 2 * (min(c, b1));
        if (c > b1)
            m = c - b1;
        if ((a + m) < c1)
            ans -= 2 * abs(a + m - c1);

        cout << ans << endl;
    }

    return 0;
}