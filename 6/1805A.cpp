#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int x = 0, xr = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] != 0) x++;
            xr ^= v[i];
        }

        if (xr == 0)            cout << 0 << endl;
        else if (n % 2 == 0)    cout << -1 << endl;
        else                    cout << xr << endl;
    }

    return 0;
}