#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, o1, o2;
    cin >> a >> b >> c >> d >> e >> f;
    if (f < e) {
        o1 = min(a, d);
        d -= o1;
        o2 = min(b, min(c, d));
    }
    else {
        o2 = min(b, min(c, d));
        d -= o2;
        o1 = min(a, d);
    }
    cout << (o1 * e) + (o2 * f);

    return 0;
}