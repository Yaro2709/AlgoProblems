#include <iostream>

using namespace std;

int main()
{
    long long int n, m, x, a = 0, b = -1, p;
    cin >> n >> m;
    while (m--) {
        cin >> x;
        p = x - a;
        if (p < 0)
            p += n;
        b += p;
        a = x;
    }
    cout << b;

    return 0;
}