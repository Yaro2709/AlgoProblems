#include <iostream>

using namespace std;

int a[100005];

int main() {
    int m, n, i, j, k, ans = 0;
    cin >> m;
    for (i = 1; i <= m; i++) cin >> a[i];
    i = 1;
    while (a[i] == 0) i++;
    int num = 0;
    while (i <= m) {
        if (a[i] == 1) {
            if (num == 1) ans++;
            ans++;
            num = 0;
        }
        else {
            num++;
        }
        i++;
    }
    cout << ans << endl;

    return 0;
}