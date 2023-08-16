#include <iostream>

using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2, x, y, z, s;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    x = (d2 + c2 - r2) / 2;
    z = c2 - x, y = r1 - x, s = d2 - x;
    if ((x <= 0 || y <= 0 || z <= 0 || s <= 0) || ((x == y) || (x == s) || (x == z) || (y == s) || (y == z) || (s == z)) || (x > 9 || y > 9 || z > 9 || s > 9) || (z + y != d1)) {
        cout << "-1";
        return 0;
    }
    cout << y << " " << x << endl << s << " " << z;
    return 0;
}