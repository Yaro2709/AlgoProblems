#include<iostream>

using namespace std;

const int N = 1e5 + 10;
int t, n;
int a[N];

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n / 2; i++)
    {
        int x = a[i], y = a[n - i - 1];
        if (x == y) continue;
        int d = abs(x - y);
        ans = gcd(ans, d);
    }
    cout << ans << endl;
}

int main()
{
    cin >> t;
    while (t--) solve();
    return 0;
}