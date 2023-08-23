#include<iostream>

using namespace std;

int main()
{
    int a, b, r = 0;
    cin >> a >> b;
    while (b != 0)
    {
        r = r * 10 + (b % 10);
        b = b / 10;
    }
    cout << r + a;
    return 0;
}