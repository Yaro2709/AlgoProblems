#include<iostream>

using namespace std;

int main()
{
    long long x1, x2, x3, y1, y2, y3;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {
        cout << 3 << endl;
        cout << x1 + x2 - x3 << " " << y1 + y2 - y3 << endl;
        cout << x1 + x3 - x2 << " " << y1 + y3 - y2 << endl;
        cout << x2 + x3 - x1 << " " << y2 + y3 - y1 << endl;
    }
    return 0;
}