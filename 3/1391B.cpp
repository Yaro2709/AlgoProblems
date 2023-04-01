#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> s;
            if (s[m - 1] == 'R') {
                ans++;
            }
        }

        cin >> s;

        for (int i = 0; i < m; i++) {
            if (s[i] == 'D') {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}