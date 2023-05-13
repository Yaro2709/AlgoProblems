#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = i + 1;
        }

        reverse(v.begin(), v.begin() + (n - 2));

        if (n & 1) swap(v[0], v[1]);

        for (int i = 0; i < n; i++) {
            cout << v[i] << " \n"[i == n - 1];
        }
    }

    return 0;
}