#include <iostream>

using namespace std;

int main()
{
    int i, j, k, a, b, c, x, y, z, n, m, t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> x >> y;
        if (max(a, b) != max(x, y)) cout << "NO" << endl;
        else if (max(a, b) != min(a, b) + min(x, y)) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}