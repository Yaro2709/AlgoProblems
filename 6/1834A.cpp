#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int count1 = 0, count2 = 0;
        int ans = 0;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) count1 += 1;
            else count2 += 1;
        }
        if (count2 > count1) {
            ans += (count2 - count1 + 1) / 2;
            int x = (count2 - count1 + 1) / 2;
            count2 -= x;
            count1 += x;
        }
        if (count2 % 2) ans += 1;
        cout << ans << endl;

        delete[] a;
    }

    return 0;
}