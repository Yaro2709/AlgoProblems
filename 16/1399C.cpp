#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve()
{
    long long int n, op = 0, mx = 0;
    cin >> n;
    vector<long long int>v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (long long int t = 2; t <= 2 * n; t++)
    {
        long long int i = 0, j = n - 1;
        mx = 0;
        while (i < j)
        {
            if (v[i] + v[j] == t)
            {
                mx++;
                i++; j--;
                continue;
            }
            if (v[i] + v[j] > t)
            {
                j--; continue;
            }
            i++;
        }
        op = max(op, mx);
    }
    cout << op << "\n";
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}