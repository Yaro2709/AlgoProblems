#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int z = abs(a) + abs(b);
    if (c < z || (c - z) % 2 != 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}