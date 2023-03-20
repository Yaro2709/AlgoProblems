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

        cout << max(a, max(b, c) + 1) - a << " " << max(b, max(a, c) + 1) - b << " " << max(c, max(a, b) + 1) - c << endl;
    }

    return 0;
}