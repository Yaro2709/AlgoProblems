#include<iostream>

using namespace std;

#define LL long long

int main() {
    LL n, a, t, i, sum = 0, l, r, solved = -1;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        sum = sum + a;
    }
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> l >> r;
        if (sum >= l && sum <= r) {
            solved = sum;
        }
        else if (sum < l && solved == -1) {
            solved = l;
        }
    }
    cout << solved << endl;

    return 0;
}