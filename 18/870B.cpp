#include<iostream>

using namespace std;

int main()
{
    long long int n, m, a[100005], mn = 1000000001, mx = -1000000001, i, ans;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    if (m == 1)cout << mn << endl;
    else if (m == 2) {

        ans = max(a[0], a[n - 1]);
        cout << ans << endl;
    }
    else cout << mx << endl;

    return 0;
}