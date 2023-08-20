#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c - a == 0)
        cout << abs(d - b) + a << " " << b << " " << abs(d - b) + c << " " << d << endl;
    else if (d - b == 0)
        cout << a << " " << abs(a - c) + b << " " << c << " " << abs(a - c) + d << endl;
    else if (abs(d - b) == abs(a - c))
        cout << a << " " << d << " " << c << " " << b << endl;
    else
        cout << -1 << endl;

    return 0;
}