#include <iostream>

using namespace std;

int main() {
    int a;
    string s;
    cin >> a;
    while (a--)
    {
        long long b, x, m, n, p, q;
        cin >> b >> s;
        m = n = p = q = 0;
        m = n = 1;

        for (x = 0; x < b - 1; x++)
        {
            if (s[x] == s[x + 1])
            {
                m++;
            }
            else
            {
                m = 1;
            }
            n = max(m, n);

        }

        for (x = 0; x < b; x++)
        {
            if (s[x] == '1') {
                p++;
            }
            else {
                q++;
            }
        }

        cout << max(n * n, p * q) << endl;
    }

    return 0;
}