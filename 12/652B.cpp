#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) {
        cin >> x;
    }

    sort(a.begin(), a.end());

    for (int i = 0, L = 0, R = n - 1; i < n; ++i) {
        if (i & 1) cout << a[R--] << ' ';
        else cout << a[L++] << ' ';
    }
    cout << endl;

    return 0;
}