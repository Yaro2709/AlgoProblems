#include<iostream>

using namespace std;

int a[100005];

int main() {
    int n, d;
    cin >> n;
    d = n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        ++a[t];
        while (a[d]) {
            cout << d << " ";
            --d;
        }
        cout << endl;
    }

    return 0;
}