#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n * 2), b(n * 2);
    for (int i = 0; i < n * 2; i++)
        cin >> a[i], b[i] = a[i];
    int cnt = 0;
    int ans = 2 * n;
    int f = 0;
    for (int i = 1; i <= n * 2; i++)
    {
        if (is_sorted(a.begin(), a.end()))
        {
            f = 1;
            ans = min(ans, i - 1);
            break;
        }
        if (i % 2 != 0)
        {
            rotate(a.begin(), a.begin() + n, a.end());
        }
        else
        {
            for (int j = 0; j < n * 2; j += 2)
                swap(a[j], a[j + 1]);
        }
    }
    if (!f)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 1; i <= n * 2; i++)
    {
        if (is_sorted(b.begin(), b.end()))
        {
            ans = min(ans, i - 1);
            break;
        }
        if (i % 2 == 0)
        {
            rotate(b.begin(), b.begin() + n, b.end());
        }
        else
        {
            for (int j = 0; j < n * 2; j += 2)
                swap(b[j], b[j + 1]);
        }
    }
    if (f) cout << ans << endl;
    else cout << -1 << endl;

    return 0;
}