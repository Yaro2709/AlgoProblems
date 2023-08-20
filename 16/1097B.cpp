#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v, cur;
    v.push_back(0);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        for (auto x : v) {
            cur.push_back(x + p);
            cur.push_back(x - p);
        }
        v = cur;
        cur.clear();
    }
    for (auto t : v) {
        if (t % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO" << '\n';

    return 0;
}