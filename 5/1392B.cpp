#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long int k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = a[i];
        }

        if (k % 2 == 1) {
            k = 1;
        }
        else {
            k = 2;
        }

        while (k--) {
            int d = *max_element(a.begin(), a.end());
            for (int i = 0; i < a.size(); i++) {
                a[i] = d - a[i];
            }
        }

        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}