#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> se;
        int sw = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (se.find(a) != se.end())sw = 1;
            se.insert(a);
        }
        if (sw)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}