#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int negs = 0; 
    for (int num : arr) {
        if (num < 0) {
            ++negs;
        }
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = abs(arr[i]);
    }
    for (int i = 0; i < negs; ++i) {
        arr[i] = -arr[i];
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t; 
    cin >> t;
    for (int i = 0; i < t; ++i) solve();

    return 0;
}