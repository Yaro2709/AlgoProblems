#include<iostream>

using namespace std;

int cnt[100009];
int p[2007][2009];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> p[0][i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cnt[j] = 0;
            for (int j = 1; j <= n; j++)
                cnt[p[i - 1][j]]++;
            for (int j = 1; j <= n; j++)
                p[i][j] = cnt[p[i - 1][j]];
        }

        int q;
        cin >> q;
        for (int i = 1; i <= q; i++)
        {
            int x, k;
            cin >> x >> k;
            k = min(n, k),
                cout << p[k][x] << endl;
        }
    }

    return 0;
}