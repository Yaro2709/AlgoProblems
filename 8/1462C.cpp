#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x;
        cin >> x;
        int sum = 0;
        string s;
        for (int i = 9; i > 0; i--)
        {
            s += '0';
            for (int j = 1; j <= i; j++)
            {
                if (sum < x)
                {
                    s[9 - i]++;
                    sum++;
                }
                else break;
            }
            if (sum == x) break;
        }
        reverse(s.begin(), s.end());
        if (sum == x) cout << s << endl;
        else cout << -1 << endl;
    }

    return 0;
}