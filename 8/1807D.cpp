#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, q; 
    cin >> n >> q;
    vector<int>a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int sum = (a[n] - (a[r] - a[l - 1]) + (r - l + 1) * k);
        if (sum % 2)cout << "YES\n";
        else cout << "NO\n";
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