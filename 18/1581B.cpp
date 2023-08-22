#include<iostream>

using namespace std;

typedef long long LL;

void solve(LL n, LL m, LL k)
{
    if (n == 1 && m == 0 && k >= 2)
    {
        cout << "YES" << endl;
        return;
    }
    LL cn2 = n * (n - 1) / 2;
    if (m == cn2 && k >= 3) cout << "YES" << endl;
    else if (m < cn2 && m >= n - 1 && k >= 4)  cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LL n, m, k;
        cin >> n >> m >> k;
        solve(n, m, k);
    }

    return 0;
}