#include<iostream>

using namespace std;

int main()
{
    long x, y, m = 1;
    cin >> x >> y;
    while (x >= 0 && y >= 0)
    {
        if (m % 2 == 1)
            x -= m;
        else
            y -= m;
        m++;

    }

    if (x < 0)      cout << "Vladik";
    else if (y < 0) cout << "Valera";

    return 0;
}