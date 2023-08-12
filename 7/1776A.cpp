#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0, res = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += (a - res) / 120;
            res = a;
        }
        sum += (1440 - res) / 120;

        if (sum >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}