#include <iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m; 
        cin >> n >> m;

        cout << n + m + min(n, m) - 3 + min(max(n, m) - 1, 1) << endl;
    }

    return 0;
}