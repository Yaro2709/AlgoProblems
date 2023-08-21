#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int i = 0, j = n - 1, mn = 1, mx = n, f = 0;
        while (i < j - 1) {
            if (v[i] == mn) i++, mn++;
            else if (v[j] == mn) j--, mn++;
            else if (v[i] == mx) i++, mx--;
            else if (v[j] == mx) j--, mx--;
            else {
                f = 1; break;
            }
        }
        if (f) cout << i + 1 << " " << j + 1 << endl;
        else cout << -1 << endl;
    }

    return 0;
}