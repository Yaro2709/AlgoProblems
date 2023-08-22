#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n]; 
    int *b = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    vector<pair<int, int>>v;
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (b[j] == a[i]) {
                swap(b[i], b[j]);
                v.push_back({ i,j }); break;
            }
        }
    }

    cout << "\n";
    cout << v.size() << "\n";
    for (auto x : v) {
        cout << x.first << " " << x.second << "\n";
    }

    delete[] a;
    delete[] b;

    return 0;
}