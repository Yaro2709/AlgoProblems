#include<iostream>

using namespace std;

#define N 100005

int a[N];

int main() {
    int n, cnt = 0, flag = 1, ans = 0; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n - 1; i++) {
        if (a[i] > a[i + 1]) cnt++, ans = n - i;
        if (cnt == 2) {
            break;
        }
    }
    if (!cnt || (cnt == 1 && a[n] <= a[1])) cout << ans << endl;
    else {
        cout << "-1" << endl;
    }

    return 0;
}