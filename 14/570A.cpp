#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, m, a = -1, b = -1, c;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < m; i++) {
        a = -1; b = -1;
        for (int j = 0; j < n; j++) {
            cin >> c;
            if (a < c) { a = c; b = j; }
        }
        v[b]++;
    }
    a = -1; b = -1;
    for (int i = 0; i < n; i++) {
        if (a < v[i]) { a = v[i]; b = i; }
    }
    cout << b + 1;

    return 0;
}