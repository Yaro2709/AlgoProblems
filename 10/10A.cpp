#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int consum = 0;
    int l, r, lastr;
    cin >> l >> r;
    consum += (r - l) * p1;
    lastr = r;
    for (int i = 1; i <= n - 1; i++) {
        cin >> l >> r;
        consum += (r - l) * p1;
        if (l - lastr <= t1) {
            consum += p1 * (l - lastr);
        }
        else if (l - lastr <= t1 + t2) {
            consum += p1 * t1 + p2 * (l - lastr - t1);
        }
        else {
            consum += p1 * t1 + p2 * t2 + p3 * (l - lastr - t1 - t2);
        }
        lastr = r;
    }
    cout << consum << endl;

    return 0;
}