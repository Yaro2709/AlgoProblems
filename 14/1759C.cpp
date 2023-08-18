#include<iostream>

using namespace std;

#define ll long long

int solve()
{
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if (a == b)
        return 0;
    if (abs(a - b) >= x)
        return 1;
    if (r - max(a, b) >= x or min(a, b) - l >= x)
        return 2;
    if (r - b >= x and a - l >= x or r - a >= x and b - l >= x)
        return 3;

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}