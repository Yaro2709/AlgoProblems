#include <iostream>

using namespace std;

int main() 
{
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    while (k--) {
        int t1, f1, t2, f2;
        cin >> t1 >> f1 >> t2 >> f2;
        if (t1 == t2) {
            cout << abs(f1 - f2) << endl;
            continue;
        }
        int d;
        if (f1 > b)
            d = b;
        else if (f1 < a)
            d = a;
        else
            d = f1;

        cout << abs(d - f1) + abs(t2 - t1) + abs(d - f2) << endl;
    }

    return 0;
}