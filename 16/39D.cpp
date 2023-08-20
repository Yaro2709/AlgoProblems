#include<iostream>

using namespace std;

int main()
{
    short a, b, c, d, e, f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    if (d == a || e == b || f == c)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}