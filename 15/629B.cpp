#include<iostream>

using namespace std;

int m[500], f[500];

int main()
{
    int n, q, w, ans = 0;
    cin >> n;
    char t;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> q >> w;
        if (t == 'M')
        {
            for (int j = q; j <= w; j++)
                m[j]++;
        }
        else
        {
            for (int jj = q; jj <= w; jj++)
                f[jj]++;
        }
        for (int r = 1; r <= 366; r++)
            ans = max(ans, min(m[r], f[r]));
    }
    cout << ans * 2;

    return 0;
}