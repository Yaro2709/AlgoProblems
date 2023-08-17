#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int l = 0, r = 1005;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        if (a > r || b < l)
        {
            cout << -1;
            return 0;
        }
        l = max(l, a);
        r = min(r, b);
    }
    if (m >= l && m <= r) cout << 0;
    else cout << min(abs(m - l), abs(m - r));

    return 0;
}