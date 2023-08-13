#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        if (b < a)swap(a, b);
        if (c - r > b || c + r < a) {
            cout << b - a << endl;
        }
        else {
            cout << b - a - min(b, c + r) + max(a, c - r) << endl;
        }
    }

    return 0;
}