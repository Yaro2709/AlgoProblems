#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        if (abs(a - b) + abs(b - c) + abs(c - a) > 4)cout << abs(a - b) + abs(b - c) + abs(c - a) - 4 << endl;
        else cout << 0 << endl;
    }

    return 0;
}