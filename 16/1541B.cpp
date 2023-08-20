#include<iostream>
#include<vector>

using namespace std;

#define ll long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int x = v[i];
            int index = i + 1;
            int p = (index + x - 1) / x;
            x = x * p;
            int req = x - index;
            for (int j = req - 1; j < i; j += v[i])
            {
                if (v[j] * v[i] == i + j + 2) ans++;
            }

        }
        cout << ans << endl;
    }

    return 0;
}