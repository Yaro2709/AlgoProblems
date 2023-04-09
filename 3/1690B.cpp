#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sol() 
{
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    for (int r = 0; r < n; r++) {
        cin >> a[r];
    }
    for (int r = 0; r < n; r++) {
        cin >> b[r];
    }

    int sum = 0;
    for (int r = 0; r < n; r++) {
        if (a[r] < b[r]) {
            cout << "NO" << endl;
            return;
        }
        sum = max(sum, a[r] - b[r]);
    }

    for (int r = 0; r < n; r++) {
        if (max(int(0), a[r] - sum) != b[r]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() 
{
    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }

    return 0;
}