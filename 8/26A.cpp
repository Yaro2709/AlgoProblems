#include <iostream>

using namespace std;

int a[111111];

int main() {
    int n;
    cin >> n;

    int ans;
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0)
            for (int j = i; j <= n; j += i) {
                a[j]++;
            }
        if (a[i] == 2) {
            ans++;
        }

    }
    cout << ans;

    return 0;
}