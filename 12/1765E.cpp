#include <iostream>

using namespace std;

int main()
{
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if (a > b)
            cout << 1 << endl;
        else
        {
            cout << (n + a - 1) / a << endl;
        }
    }
    return 0;
}