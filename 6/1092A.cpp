#include<iostream>

using namespace std;

int main() {
    int n, k, t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cout << (char)('a' + (i % k));
        }
        cout << '\n';
    }
    return 0;
}