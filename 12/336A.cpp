#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int s = abs(x) + abs(y);
    int x1, y1, x2, y2;
    x1 = x < 0 ? -s : s;
    y1 = 0;
    x2 = 0;
    y2 = y < 0 ? -s : s;
    if (x1 >= x2) { swap(x1, x2); swap(y1, y2); }
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";

    return 0;
}