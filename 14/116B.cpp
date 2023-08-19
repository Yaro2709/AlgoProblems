#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s[10000];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'W' && ((i > 0 && s[i - 1][j] == 'P') || (i < n - 1 && s[i + 1][j] == 'P') || (j > 0 && s[i][j - 1] == 'P') || (j < m - 1 && s[i][j + 1] == 'P')))
                ans++;
        }
    }

    cout << ans;

    return 0;
}