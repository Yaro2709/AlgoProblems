#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, d, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        int x = n / 2;
        if (n >= d || ceil((1.0 * d) / (x + 1)) + x <= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}