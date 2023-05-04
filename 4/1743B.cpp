#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int a, n;
    cin >> n;
    cout << 1 << ' ';
    for (int i = 3; i <= n; i++) cout << i << ' ';
    cout << 2 << endl;
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