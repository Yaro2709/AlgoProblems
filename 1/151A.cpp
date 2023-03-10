#include<iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, a, b, m;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    a = (k * l) / nl;
    b = c * d;
    m = p / np;
    if (m <= a && m <= b) {
        cout << m / n;
    }
    else if (a <= m && a <= b) {
        cout << a / n;
    }
    else {
        cout << b / n;
    }

    return 0;
}