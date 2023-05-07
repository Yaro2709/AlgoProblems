#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    if (a > d)
        d = a;
    if (b > d)
        d = b;
    if (c > d)
        d = c;

    if (a + b + c - d > d)
        cout << 0;
    else 
        cout << d - (a + b + c - d) + 1;

    return 0;
}