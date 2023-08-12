#include <iostream>
#include <map>

using namespace std;

map<int, int> m;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t) {
            int u = ++m[t];
            if (u == 2) {
                c++;
            }
            else if (u > 2) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << c << endl;

    return 0;
}