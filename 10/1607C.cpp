#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int maxdiff = v[0];
        for (int i = 0; i < n - 1; i++) {
            maxdiff = max(maxdiff, v[i + 1] - v[i]);
        }
        cout << maxdiff << "\n";
    }

    return 0;
}