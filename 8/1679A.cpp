#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        if (x % 2 == 1 || x == 2) cout << -1 << endl;
        else cout << (x + 4) / 6 << ' ' << x / 4 << endl;
    }
    return 0;
}