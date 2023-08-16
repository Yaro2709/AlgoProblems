#include <iostream>
#include <vector>

using namespace std;

char a[10005];
char b[10005];

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        vector<int> d;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                d.push_back(i);
            }
            if (d.size() > 2) {
                break;
            }
        }

        if (d.size() == 2 && a[d[0]] == a[d[1]] && b[d[0]] == b[d[1]]) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }

    return 0;
}