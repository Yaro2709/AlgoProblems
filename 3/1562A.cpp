#include <iostream>

using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;
    int s = r / 2 + 1;

    if (s > l)
    {
        cout << r % s << endl;
    }
    else
    {
        cout << r % l << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}