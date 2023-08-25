#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        long long sum = 0;
        bool fg = false;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ind = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] != 0) {
                ind = i;
                break;
            }
        }
        for (int i = 0; i <= ind; i++) {
            sum += v[i];
            if (sum < 1 && i != ind) {
                fg = true;
            }
        }
        if (fg || sum != 0) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}