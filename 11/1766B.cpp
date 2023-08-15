#include <iostream>

using namespace std;

int main()
{
    int t, n, i;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (i = n - 2; i > 1; i--)
            if (s.find(s.substr(i, 2)) < i - 1)
            {
                cout << "YES" << endl;
                break;
            }
        if (i == 1 || n < 4)
            cout << "NO" << endl;
    }

    return 0;
}