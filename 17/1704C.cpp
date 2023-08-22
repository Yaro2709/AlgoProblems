#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int maxN = 2e5;
int a[maxN];

void solve()
{
    vector<int> v;
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    for (int i = 1; i < m; i++)
        v.push_back(a[i] - a[i - 1] - 1);
    v.push_back(n - a[m - 1] + a[0] - 1);
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        ans += max(0, v[i] - i * 4 - 2);
        if (v[i] - i * 4 > 0) ans++;
    }
    cout << n - ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)solve();

    return 0;
}