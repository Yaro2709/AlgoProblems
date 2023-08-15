#include <iostream>

using namespace std;

int main()
{
    long long int o, n, x, z = 0, d = 1, i, t, w, j, p, h, max = 0, y, k, m, l, r, q;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        l = s.size();
        if (s[0] == ')' || s[l - 1] == '(')
            cout << "No" << endl;
        else {
            p = count(s.begin(), s.end(), '?');
            if (p % 2 == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}