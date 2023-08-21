#include<iostream>
#include<algorithm>

using namespace std;

int x[300001];

int main()
{
    long long n, i, j, ans = 0;
    cin >> n;

    for (i = 1; i <= n; i++)
        cin >> x[i];

    sort(x + 1, x + n + 1);

    for (i = 1; i < n; i++)
        ans += (x[i] * (i + 1));
    ans += (x[n] * n);

    cout << ans;

    return 0;
}