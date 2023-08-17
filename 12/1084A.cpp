#include <iostream>

using namespace std;

const int N_MAX = 100;
int a[N_MAX];

int main() {
    int n;
    cin >> n;
    int ans;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        ans += 4 * (i - 1) * a[i];
    }

    cout << ans << '\n';

    return 0;
}