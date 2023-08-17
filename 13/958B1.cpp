#include<iostream>

using namespace std;

const int N = 1005;
int f[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        f[u]++;
        f[v]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += (f[i] == 1);
    cout << ans;

    return 0;
}