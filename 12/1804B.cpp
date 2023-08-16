#include <iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k, d, w; 
        cin >> n >> k >> d >> w;
        int *t = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> t[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans++;
            int j = i;
            while (j + 1 < n && j + 1 - i < k && t[j + 1] <= t[i] + w + d) {
                j++;
            }
            i = j;
        }
        cout << ans << endl;

        delete[] t;
    }

    return 0;
}