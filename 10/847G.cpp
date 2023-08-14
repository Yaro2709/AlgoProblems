#include <iostream>

using namespace std;

int main()
{
    int n, mx = 0, ct = 0;
    cin >> n;
    string s[10000];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == '1')
                ct++;
        }
        mx = max(mx, ct);
        ct = 0;
    }

    cout << mx << endl;

    return 0;
}