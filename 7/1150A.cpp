#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long n, m, r, i, s;
    long a[1001], b[1001];
    cin >> n >> m >> r;
    for (i = 1; i <= n; ++i) cin >> a[i];
    for (i = 1; i <= m; ++i) cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + m);
    if (a[1] >= b[m])
    {
        cout << r;
        return 0;
    }
    s = r % a[1];
    s += r / a[1] * b[m];
    cout << s;

    return 0;
}