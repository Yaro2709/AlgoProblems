#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = 0; i <= x; i++)
    {
        int j = y - i;

        if (j < 0)
            continue;
        int k1 = x - i;
        int k2 = z - j;

        if (k1 == k2)
        {
            cout << i << " " << j << " " << k1;
            return 0;
        }
    }
    cout << "Impossible";

    return 0;
}