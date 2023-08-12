#include <iostream>

using namespace std;

int n;
int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int main() {
    int m, d;
    cin >> m >> d;
    int ans = 1;
    int dd = a[m] - (7 - d + 1);
    ans += dd / 7;
    if (dd % 7) {
        ans += 1;
    }
    cout << ans << endl;

    return 0;
}