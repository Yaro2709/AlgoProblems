#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector <pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(make_pair(s, i));
    }
    for (int i = 0; i < n; i++)
    {
        string s = v[i].first;
        for (int j = 0; j < m; j++)
        {
            if (j % 2 != 0) {
                s[j] = 90 - s[j];
            }
        }
        v[i].first = s;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second + 1 << " ";
    }
    cout << "\n";

}

int main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}