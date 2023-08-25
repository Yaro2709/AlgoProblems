#include<iostream>

using namespace std;

int main() {
    int n, k, ct, mod = 998244353, ls, xxo;
    cin >> n >> k;
    int *p = new int[n + 1];
    ct = k;
    ls = -1;
    int tot = 1, s = 0, ans = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        if (p[i] <= n && p[i] >= n - k + 1)
        {
            s += p[i];
            if (ls != -1)
                ans = (ans * (i - ls)) % mod;
            ls = i;
        }
    }
    cout << s << " " << ans;

    delete[] p;

    return 0;
}