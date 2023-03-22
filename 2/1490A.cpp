#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[110];
        cin >> n >> a[1];

        int ans = 0;
        for (int i = 2; i <= n; i++)
        {
            cin >> a[i];
            int x = min(a[i], a[i - 1]);
            int y = max(a[i], a[i - 1]);
            while (x * 2 < y)
            {
                x *= 2;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}