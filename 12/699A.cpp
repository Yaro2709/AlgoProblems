#include <iostream>

using namespace std;

int main() {
    int n, a[200000], mini = 1e9;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') {
            int crach = (a[i + 1] - a[i]) / 2;
            mini = min(mini, crach);
        }
    }
    if (mini == 1e9) {
        cout << -1;
    }
    else {

        cout << mini;
    }

    return 0;
}