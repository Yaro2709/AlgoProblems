#include<iostream>
#include<set>

using namespace std;

int a[100000];

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        bool one = false, neighbors = false;
        set<int> s;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            s.insert(a[i]);
            if (a[i] == 1) one = true;
            if (s.count(a[i] - 1) || s.count(a[i] + 1)) neighbors = true;
        }
        if (one && neighbors) cout << "no\n";
        else cout << "yes\n";
    }

    return 0;
}