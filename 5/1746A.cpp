#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int an = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i], an |= v[i];
    an ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}