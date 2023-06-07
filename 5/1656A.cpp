#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << min_element(a.begin(), a.end()) - a.begin() + 1 << ' ' << max_element(a.begin(), a.end()) - a.begin() + 1 << endl;
    }

    return 0;
}