#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin() + 1, v.end());

    for (int i = 1; i < n; i++) {
        if (v[0] < v[i]) {
            v[0] += v[i] - (v[0] + v[i]) / 2;
            v[i] = (v[0] + v[i]) / 2;
        }
    }

    cout << v[0] << endl;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}