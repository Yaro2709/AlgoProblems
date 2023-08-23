#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    map<int, int>mp;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for (auto t : mp) {
        if (t.second > 1) {
            cout << ans << '\n';
            return 0;
        }
    }
    map<int, int>v;
    set<int>s;
    for (auto p : a) {
        p &= x;
        s.insert(p);
    }
    sort(a.begin(), a.end());
    if (s.size() == n) {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int curr = a[i];
        mp[curr]--;
        curr &= x;
        if (mp[curr]) {
            cout << "1\n";
            return 0;
        }
        mp[a[i]]++;
    }
    cout << "2\n";

    return 0;
}