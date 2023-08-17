#include <iostream>

using namespace std;

int main()
{
    int yo, ans, n, s, f, t;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        yo = f + t;
        if (ans < yo) ans = yo;
    }
    if (ans < s)ans = s;
    cout << ans;

    return 0;
}