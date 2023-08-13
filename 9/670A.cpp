#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    x = n / 7;
    y = n % 7;
    int d = 0;
    if (y > 5)
        d = y - 5;
    cout << 2 * x + d << " " << 2 * x + min(2, y) << endl;

    return 0;
}