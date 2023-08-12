#include <iostream>

using namespace std;

int main()
{
    int n, m, ans = 0, y = 0;
    cin >> n >> m;
    while (n != 0)
    {
        ++ans;
        --n;
        ++y;
        if (y % m == 0)
            ++n;
    }
    cout << ans;

    return 0;
}