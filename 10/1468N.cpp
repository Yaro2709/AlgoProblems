#include <iostream>

using namespace std;

int main() {
    int tc, i;
    cin >> tc;
    while (tc--) {
        int c[3], flag = 0;
        for (i = 0; i < 3; i++)
            cin >> c[i];
        int a[5];
        for (i = 0; i < 5; i++)
            cin >> a[i];
        for (i = 0; i < 3; i++)
        {
            if (a[i] <= c[i]) {
                c[i] = c[i] - a[i];
                a[i] = 0;
            }
        }
        if (c[0] + c[2] >= a[3]) {
            if (c[0] < a[3]) {
                a[3] = a[3] - c[0];
                c[2] = c[2] - a[3];
            }
            a[3] = 0;
        }
        if (c[1] + c[2] >= a[4]) {
            a[4] = 0;
        }
        for (i = 0; i < 5; i++) {
            if (a[i] != 0)
                flag = 1;
        }
        if (!flag)
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}