#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long int c = 0, m;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                c++;
            m = c;
        }
        for (int i = k; i < n; i++)
        {
            if (s[i] != s[i - k])
            {
                if (s[i] == 'W')
                    c++;
                else
                    c--;
                if (c < m)
                    m = c;
            }
        }
        cout << m << endl;
    }

    return 0;
}