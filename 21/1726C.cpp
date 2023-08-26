#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, i;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;
        for (i = 0; i < 2 * n - 1; i++)
        {
            if (s[i] == '(' && s[i + 1] == '(')
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}