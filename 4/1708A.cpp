#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f = 1;
        cin >> n;
        vector<int> vc(n);
        for (int i = 0; i < n; i++) cin >> vc[i];
        for (int i = 1; i < n; i++) if (vc[i] % vc[0] != 0) f = 0;
        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}