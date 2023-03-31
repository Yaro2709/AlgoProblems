#include<iostream>

using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool yes = 0;
    if (a < b && c < d && a < c && b < d) yes = 1;
    if (c < a && d < b && c < d && a < b) yes = 1;
    if (d < c && b < a && d < b && c < a) yes = 1;
    if (b < d && a < c && b < a && d < c) yes = 1;

    if (yes) cout << "YES" << endl;
    else     cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}