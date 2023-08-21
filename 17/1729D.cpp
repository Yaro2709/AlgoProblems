#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e5 + 10;
int x[N], y[N];
int d[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> x[i];
        for (int i = 1; i <= n; i++)
        {
            cin >> y[i];
            d[i] = y[i] - x[i];
        }
        sort(d + 1, d + 1 + n);

        int res = 0;
        for (int i = 1, j = n; i <= n; i++)
        {
            if (i >= j) break;
            if (d[i] + d[j] >= 0) res++, j--;
        }
        cout << res << endl;
    }
    return 0;
}