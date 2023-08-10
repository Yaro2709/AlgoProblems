#include <iostream>

using namespace std;

const int N = 110;
int main() {
    int t;
    cin >> t;
    int a[N];
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0, r = n - 1;
        while (a[l]) l++;
        while (a[r]) r--;
        if (l > r) {
            cout << 0 << endl;
        }
        else {
            cout << r - l + 2 << endl;
        }
    }

    return 0;
}