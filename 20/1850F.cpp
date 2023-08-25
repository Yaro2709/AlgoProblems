#include<iostream>
#include<vector>
#include<map>

using namespace std;

void solve()
{
    int n, d, ans = 0, ans1 = 1, r = 0;
    cin >> n;
    map<int, int>m;
    vector<int> a, b(n + 1);
    for (int i = 0; i < n; i++)
    {
        int r; cin >> r;
        if (r <= n && m[r] == 0)
        {
            a.push_back(r);
        }
        m[r]++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j * a[i] <= n; j++)
        {
            b[j * a[i]] += m[a[i]];
        }
    }
    int x = 0;
    for (int i = 0; i <= n; i++)
    {
        x = max(x, b[i]);
    }
    cout << x << endl;

}

int main()
{
    long long int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}