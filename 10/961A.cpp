#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int >v(m), c(n + 1, 0);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
        c[v[i]]++;
    }
    sort(c.begin() + 1, c.end());
    cout << c[1];

    return 0;
}