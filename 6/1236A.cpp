#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int d = min(b, c / 2);
        b = b - d;
        c = c - d * 2;
        int e = min(a, b / 2);
        b = b - e * 2;
        a = a - e;
        cout << sum - (a + b + c) << "\n";
    }

    return 0;
}