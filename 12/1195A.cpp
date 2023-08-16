#include <iostream>

using namespace std;

int a[1001], cnt[1001];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int kol = 0;
    for (int i = 1; i <= k; i++) {
        if (cnt[i] % 2 == 1) {
            kol++;
        }
    }
    cout << n - kol / 2;

    return 0;
}