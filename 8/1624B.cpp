#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;

    bool f1, f2, f3;

    while (t--) {
        cin >> a >> b >> c;
        b *= 2;
        f1 = (b - c) % a == 0 && b - c > 0;
        f2 = (b - a) % c == 0 && b - a > 0;
        f3 = (a + c) % b == 0;

        if (f1 || f2 || f3) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}