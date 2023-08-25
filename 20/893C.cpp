#include<iostream>
#include<vector>

using namespace std;

vector<int64_t>vi[100005];
int64_t a[100005];
int64_t l1;

void dfs(int64_t s)
{
    l1 = min(l1, a[s]);
    a[s] = -1;
    for (auto x : vi[s])
    {
        if (a[x] != -1)
            dfs(x);
    }
}

int main()
{
    int64_t n, m;
    cin >> n >> m;
    for (int64_t i = 1; i <= n; i++)
        cin >> a[i];

    for (int64_t i = 1; i <= m; i++)
    {
        int64_t a, b;
        cin >> a >> b;
        vi[a].push_back(b);
        vi[b].push_back(a);
    }

    int64_t l = 0;
    for (int i = 1; i <= n; i++)
    {
        l1 = INT_MAX;
        if (a[i] != -1)
        {
            dfs(i);
            l = l + l1;
        }
    }
    cout << l;

    return 0;
}