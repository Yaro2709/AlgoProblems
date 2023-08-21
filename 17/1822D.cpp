#include<iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; cin >> n;

        if (n > 1 && n % 2 != 0) cout << "-1";
        else for (int i = 0; i < n; ++i) cout << ((i % 2 == 0) ? n - i : i) << " ";
        cout << "\n";
    }

    return 0;
}