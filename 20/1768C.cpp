#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<int> c(n + 1);
    vector<int> d(n + 1);
    bool ok = true;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[a[i]]++;
        if (b[a[i]] > 2) ok = false;
    }
    int j = 0;
    for (int i = n; i > 0; i--) {
        if (b[i] == 2) j++;
        if (b[i] == 0) j--;
        if (j < 0) ok = false;
    }
    if (b[1] == 2 || !ok || b[n] < 1) { cout << "no" << endl; return; }
    else cout << "yes" << endl;
    vector<int> l;
    vector<int> e;
    int p = 0;
    for (int i = 1; i <= n; i++) {

        if (b[i] == 0) l.push_back(i);
        if (b[i] == 2) { e.push_back(i); p++; }
    }
    sort(l.begin(), l.end());
    sort(e.begin(), e.end());
    map<int, int> mp;
    for (int i = p - 1; i >= 0; i--) {
        mp[e[i]] = l[i];
    }
    for (int i = 1; i <= n; i++) {
        if (b[a[i]] == 1) {
            c[i] = a[i], d[i] = a[i];
        }
        if (b[a[i]] == 3) {
            c[i] = a[i], d[i] = mp[a[i]];

        }
        if (b[a[i]] == 2) {
            b[a[i]]++;
            c[i] = mp[a[i]], d[i] = a[i];
        }
    }
    for (int i = 1; i <= n; i++) cout << c[i] << ' ';
    cout << endl;
    for (int i = 1; i <= n; i++) cout << d[i] << ' ';
    cout << endl;
}

int main() 
{
    int n; cin >> n;
    while (n--) solve();

    return 0;
}