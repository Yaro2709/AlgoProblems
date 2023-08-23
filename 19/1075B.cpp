#include<iostream>

using namespace std;

int main()
{
    long n, m, temp, tnum;
    long cur, next, prev;

    cin >> n >> m;
    long *x = new long[n + m];
    for (long i = 0; i < n + m; i++) {
        cin >> temp;
        x[i] = temp;
    }

    tnum = -1;
    cur = 0;
    next = 0;
    prev = 0;
    for (long i = 0; i < n + m; i++) {
        cin >> temp;
        if (temp == 1) {
            if (tnum == -1) {
                cur = i;
                tnum++;
            }
            else {
                for (long j = prev + 1; j < i; j++) {
                    if (x[j] - x[prev] > x[i] - x[j]) {
                        next++;
                    }
                    else {
                        cur++;
                    }
                }
                cout << cur << " ";
                cur = next;
                next = 0;
            }
            prev = i;
        }
    }
    cout << cur + n + m - prev - 1 << endl;

    delete[] x;

    return 0;
}